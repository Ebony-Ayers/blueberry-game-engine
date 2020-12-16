#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "stb_include.h"

#include "pch.h"

#include "windows.h"
#include "runtime.h"
#include "log.h"
#include "fileio.h"

namespace BlueBerry
{
	int init()
	{
		std::cout << "BlueBerry Game engine version 0.0.0" << std::endl;
		#ifdef __GNUC__
		std::cout << "compiled: GCC v" << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << std::endl;
		std::cout << "c++ standard: " << std::to_string(__cplusplus).substr(0, 4)  << " v" << std::to_string(__cplusplus).substr(4, 2) << std::endl;
		std::cout << "compiled on " << __DATE__ << " at " << __TIME__ << std::endl;
		std::cout << "---------------------------------------------------------------" << std::endl;
		#endif
		
		//BB_DEBUG_LOG_MESSAGE("test message with number %d", 69);
		
		
		//create the window with glfw
		BlueBerry::initialise_window();
		
		//start the runtime main thread in a new thread
		std::thread runtime_main_thread = std::thread(BlueBerry::runtime::start_runtime);
		
		//initinte loop checking input
		BlueBerry::input_handling_loop();

		//runtime main thread should be closed at this point but needed for safety
		runtime_main_thread.join();
		
		
		return 0;
	}
}