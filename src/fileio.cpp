#include "pch.h"

#include "fileio.h"

namespace BlueBerry
{
	namespace fileio
	{
		fileio_manager::fileio_manager(fileio_manager_settings settings)
		: m_settings(settings), m_registered_files(), m_operation_queue(), m_operation_mutex(), m_current_priority(1), m_new_job(false), m_number_of_jobs(0), m_closing(false), m_io_prossessing_threads(), initialised_threads(false)
		{
			m_operation_queue.resize(m_settings.number_of_priorities);

			
			size_t number_of_threads = (m_settings.allow_concurrent_read_write + 1) * static_cast<size_t>(m_settings.number_of_concurrent_file_accesses);
			m_io_prossessing_threads.resize(number_of_threads);
			m_operation_mutex.lock();
			for(size_t i = 0; i < number_of_threads; i++)
			{
				m_io_prossessing_threads[i] = std::thread(m_thread_function, this);
			}
			initialised_threads = true;
			m_operation_mutex.unlock();
		}
		fileio_manager::~fileio_manager()
		{
			m_closing = true;
			for(size_t i = 0; i < m_io_prossessing_threads.size(); i++)
			{
				m_io_prossessing_threads[i].join();
			}
		}

		size_t fileio_manager::register_file(const char* file_name, bool binary_mode)
		{
			fileio_manager_file_record new_record;
			new_record.file_name = file_name;
			new_record.binary_mode = binary_mode;

			m_registered_files.push_back(new_record);
			return m_registered_files.size() - 1;
		}

		void fileio_manager::read_file(size_t file_id, size_t start, size_t length, void* data_location, std::mutex* signaling_mutex, size_t priority)
		{
			m_operation_mutex.lock();

			fileio_manager_io_operation new_operation;
			new_operation.is_read_operation = true;
			new_operation.clear_file_on_open = false;
			new_operation.file_id = file_id;
			new_operation.start_offset = static_cast<std::streamoff>(start);
			new_operation.length = length;
			new_operation.location = data_location;
			new_operation.mutex = signaling_mutex;
			new_operation.being_processed = false;
			new_operation.progress = 0;

			new_operation.mutex->lock();
			
			m_operation_queue[priority - 1].push(new_operation);
			m_number_of_jobs++;

			if(priority > m_current_priority)
			{
				m_new_job = true;
				m_current_priority = priority;
			}

			m_operation_mutex.unlock();
		}
		void fileio_manager::write_file(size_t file_id, size_t start, size_t length, void* data_location, std::mutex* signaling_mutex, size_t priority)
		{
			m_operation_mutex.lock();

			fileio_manager_io_operation new_operation;
			new_operation.is_read_operation = false;
			new_operation.clear_file_on_open = false;
			new_operation.file_id = file_id;
			new_operation.start_offset = static_cast<std::streamoff>(start);
			new_operation.length = length;
			new_operation.location = data_location;
			new_operation.mutex = signaling_mutex;
			new_operation.being_processed = false;
			new_operation.progress = 0;

			new_operation.mutex->lock();

			m_operation_queue[priority - 1].push(new_operation);
			m_number_of_jobs++;

			if(priority > m_current_priority)
			{
				m_new_job = true;
				m_current_priority = priority;
			}

			m_operation_mutex.unlock();
		}
		void fileio_manager::write_file(size_t file_id, size_t start, size_t length, void* data_location, std::mutex* signaling_mutex, bool clear_file_on_open, size_t priority)
		{
			m_operation_mutex.lock();

			fileio_manager_io_operation new_operation;
			new_operation.is_read_operation = false;
			new_operation.clear_file_on_open = clear_file_on_open;
			new_operation.file_id = file_id;
			new_operation.start_offset = static_cast<std::streamoff>(start);
			new_operation.length = length;
			new_operation.location = data_location;
			new_operation.mutex = signaling_mutex;
			new_operation.being_processed = false;
			new_operation.progress = 0;

			m_operation_queue[priority - 1].push(new_operation);
			m_number_of_jobs++;

			if(priority > m_current_priority)
			{
				m_new_job = true;
				m_current_priority = priority;
			}

			m_operation_mutex.unlock();
		}

		size_t fileio_manager::file_length(size_t file_id)
		{
			if(m_registered_files[file_id].binary_mode)
			{
				std::ifstream file(m_registered_files[file_id].file_name, std::ios::ate | std::ios::binary);
				return static_cast<size_t>(file.tellg());
			}
			else
			{
				std::ifstream file(m_registered_files[file_id].file_name, std::ios::ate);
				return static_cast<size_t>(file.tellg());
			}
		}

		void fileio_manager::m_thread_function(fileio_manager* manager)
		{
			//wait untill there is a job to be done
			while(!manager->m_closing)
			{
				if(manager->m_number_of_jobs > 0)
				{
					manager->m_operation_mutex.lock();
					
					//if there are no jobs left and the engine is closing
					if(manager->m_number_of_jobs == 0 && manager->m_closing)
					{
						return;
					}
					
					//get the job
					//if there is no known highest prority find it
					size_t active_operation_priority;
					fileio_manager_io_operation active_operation;
					if(manager->m_current_priority == 0)
					{
						size_t highest_proirity;
						for(size_t i = 0; i < manager->m_settings.number_of_priorities; i++)
						{
							if(!manager->m_operation_queue[i].empty())
							{
								highest_proirity = i;
							}
						}
						active_operation_priority = highest_proirity;
						active_operation = manager->m_operation_queue[highest_proirity].front();
						manager->m_operation_queue[highest_proirity].pop();
					}
					else
					{
						active_operation_priority = manager->m_current_priority.load();
						active_operation = manager->m_operation_queue[active_operation_priority - 1].front();
						manager->m_operation_queue[manager->m_current_priority - 1].pop();
						//make the next thread search manually
						manager->m_current_priority = 0;
					}
					active_operation.being_processed = true;

					manager->m_operation_mutex.unlock();

					//set up the file stream
					std::fstream file_stream;
					std::ios_base::openmode file_open_mode;
					if(active_operation.is_read_operation)
					{
						file_open_mode |= std::ios::in;
					}
					else
					{
						file_open_mode |= std::ios::out;
					}
					if(manager->m_registered_files[active_operation.file_id].binary_mode)
					{
						file_open_mode |= std::ios::binary;
					}
					if(active_operation.clear_file_on_open)
					{
						file_open_mode |= std::ios::trunc;
					}
					file_stream.open(manager->m_registered_files[active_operation.file_id].file_name, file_open_mode);
					//read or write the file
					//if a higher priority job crops up then set completed_operation to false and finish the get the next job
					bool completed_operation = true;
					//read from file
					if(active_operation.is_read_operation)
					{
						file_stream.seekg(active_operation.start_offset);

						
						char character;
						while(file_stream.get(character) && active_operation.progress < active_operation.length)
						{
							static_cast<char*>(active_operation.location)[active_operation.progress] = character;
							active_operation.progress++;
							
							if(manager->m_new_job)
							{
								active_operation.progress--;
								manager->m_new_job = false;
								completed_operation = false;
								break;
							}
						}
					}
					//write to file
					else
					{
						file_stream.seekp(active_operation.start_offset);
						
						while(active_operation.progress < active_operation.length)
						{
							file_stream << static_cast<char*>(active_operation.location)[active_operation.progress];
							active_operation.progress++;

							if(manager->m_new_job)
							{
								active_operation.progress--;
								manager->m_new_job = false;
								completed_operation = false;
								break;
							}
						}
					}
					
					//if the job is completed release the job's mutex
					if(completed_operation)
					{
						file_stream.close();
						active_operation.mutex->unlock();
						manager->m_number_of_jobs--;
						active_operation.mutex->unlock();
					}
					//if the job is not compelete leave leave job's locked and readd it to the queue
					else
					{
						file_stream.close();
						manager->m_operation_mutex.lock();
						manager->m_operation_queue[active_operation_priority - 1].push(active_operation);
						manager->m_operation_mutex.unlock();
					}
				}
			}
		}
	}
}