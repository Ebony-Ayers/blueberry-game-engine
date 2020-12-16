namespace BlueBerry
{
	namespace fileio
	{
		struct fileio_manager_file_record
		{
			const char* file_name;
			bool binary_mode;
		};

		struct fileio_manager_io_operation
		{
			bool is_read_operation;
			bool clear_file_on_open;
			size_t file_id;
			std::streamoff start_offset;
			size_t length;
			void* location;
			std::mutex* mutex;
			bool being_processed;
			size_t progress;
		};

		struct fileio_manager_settings
		{
			//the number of different priorities can file can be givven
			//defaults to 6 to match PS5 SSD controler
			size_t number_of_priorities = 6;
			//if the drive (like SAS) support concurrent reading and writing this option will increase through put
			bool allow_concurrent_read_write = false;
			//set to 0 to disable concurrent file access
			//setting to 1 will behave like 0 but with added overhead
			int number_of_concurrent_file_accesses = 1;
		};
		
		class fileio_manager
		{
			public:
				fileio_manager(fileio_manager_settings settings);
				~fileio_manager();

				size_t register_file(const char* file_name, bool binary_mode = false);

				void read_file(size_t file_id, size_t start, size_t length, void* data_location, std::mutex* signaling_mutex, size_t priority = 1);
				void write_file(size_t file_id, size_t start, size_t length, void* data_location, std::mutex* signaling_mutex, size_t priority = 1);
				void write_file(size_t file_id, size_t start, size_t length, void* data_location, std::mutex* signaling_mutex, bool clear_file_on_open, size_t priority = 1);

				size_t file_length(size_t file_id);
			private:
				fileio_manager_settings m_settings;

				std::vector<fileio_manager_file_record> m_registered_files;

				std::vector<std::queue<fileio_manager_io_operation>> m_operation_queue;
				std::mutex m_operation_mutex;

				std::atomic_size_t m_current_priority;
				std::atomic_bool m_new_job;
				std::atomic_size_t m_number_of_jobs;
				std::atomic_bool m_closing;

				std::vector<std::thread> m_io_prossessing_threads;
				static void m_thread_function(fileio_manager* manager);
			public:
				std::atomic_bool initialised_threads;
		};
	}
}