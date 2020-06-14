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
		int status = 0;
		status = BlueBerry::initialise_window();
		
		std::thread runtime_main_thread = std::thread(BlueBerry::runtime::start_runtime);
		
		status = BlueBerry::handle_inputs();

		runtime_main_thread.join();
		

		return 0;
	}
}