#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include "pch.h"

#include "windows.h"
#include "runtime.h"

namespace BlueBerry
{
	int init()
	{
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