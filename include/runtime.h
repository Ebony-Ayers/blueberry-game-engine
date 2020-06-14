#pragma once

namespace BlueBerry
{
	extern std::thread runtime_main_thread;
	
	namespace runtime
	{
		extern std::mutex frame_rendered_mutex;

		int start_runtime();
		int main_loop();
	}	
}