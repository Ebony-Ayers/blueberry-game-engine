#pragma once

namespace BlueBerry
{
	extern std::thread runtime_main_thread;
	
	namespace runtime
	{
		//only used to signal when a frame has been rendered
		extern std::mutex frame_rendered_mutex;
		
		//init function for the runtime main thread
		int start_runtime();
		//main loop for the runtiem main thread
		int main_loop();
	}	
}