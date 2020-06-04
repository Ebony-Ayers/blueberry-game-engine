//Joseph Davies 2020
//https://github.com/Joseph-Davies/

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include "pch.h"
#include "windows.h"

namespace BlueBerry
{
	void init()
	{
		int status = 0;
		status = BlueBerry::initialise_window();
		status = BlueBerry::handle_inputs();
	}
}