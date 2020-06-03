//Joseph Davies 2020
//https://github.com/Joseph-Davies/

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include <pch.h>

namespace BlueBerry
{
	void init()
	{
		std::cout << "Initialising Engine\n";
		
		GLFWwindow* window;
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		window = glfwCreateWindow(800, 600, "Blue Berry game engine test", nullptr, nullptr);
		while(!glfwWindowShouldClose(window))
		{
			glfwPollEvents();
		}
		glfwTerminate();
		
	}
}