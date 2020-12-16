#include <experimental/source_location>

#define BB_DEBUG_LOG_MESSAGE(format, ...) printf(format __VA_OPT__(,) __VA_ARGS__)

namespace BlueBerry
{
	class BB_LOGABLE
	{
		public:
			virtual std::shared_ptr<char[]> to_string();
	};

	typedef void(*BB_log_callback)(size_t size, std::shared_ptr<char[]>);
	
	class BB_log
	{
		public:

		private:

	};

	class BB_loger
	{
		public:
			BB_loger();

			BB_log start_log(const char* format, const std::experimental::source_location& location = std::experimental::source_location::current());
			void submit_log(BB_log log);
			void flush(BB_log log);
			void flush_all();
			
			void set_callback(BB_log_callback new_callback);
			void set_file(const char* new_file_name);

		private:
			BB_log_callback m_callback;

			const char* m_file;
	};
}