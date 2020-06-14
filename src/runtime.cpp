#include "runtime.h"
#include "input.h"
#include "windows.h"

namespace BlueBerry
{
	extern std::thread runtime_main_thread;
	
	namespace runtime
	{
		std::mutex frame_rendered_mutex;
		
		int start_runtime()
		{
			int status = 0;
			
			while(true)
			{
				status = BlueBerry::runtime::main_loop();

				switch(status)
				{
					case -1:
						return 0;
						break;
				}	
			}
			
			return 0;
		}

		int main_loop()
		{
			//----------------------------LOGIC----------------------------

			std::cout << "runtime loop\n";
			if(BlueBerry::input::key.pressed.Q)
			{
				std::cout << "Stopping runtime\n";
				BlueBerry::should_close = true;
				return -1;
			}
			
			//0.7ms
			std::this_thread::sleep_for(std::chrono::microseconds(700));

			//----------------------------RENDER----------------------------

			//16.0ms
			std::this_thread::sleep_for(std::chrono::milliseconds(16));

			BlueBerry::runtime::frame_rendered_mutex.unlock();
			
			return 0;
		}
	}	
}