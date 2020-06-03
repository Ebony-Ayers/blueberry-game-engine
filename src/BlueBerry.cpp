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
#include "keys.h"

namespace BlueBerry
{
	void glfw_key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		std::cout << "key: " << KEYBOARD_KEY_TO_STRING(key) << (action == 1 ? " pressed" : " released") << std::endl;
	}
	void glfw_mouse_pos_callback(GLFWwindow* window, double xpos, double ypos)
	{
		std::cout << "mouse pos: (" << xpos << ", " << ypos << ")" << std::endl;
	}
	void glfw_mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
	{
		std::cout << "mouse button: " << MOUSE_BUTTON_TO_STRING(button) << " " << (action == 1 ? " pressed" : " released") << std::endl;
	}
	void glfw_mouse_scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
	{
		std::cout << xoffset << " " << yoffset << std::endl;
	}
	void glfw_drag_drop_callback(GLFWwindow* window, int count, const char** paths)
	{
		for(int i = 0; i < count; i++)
		{
			std::cout << paths[i] << std::endl;
		}
	}

	void init()
	{
		std::cout << "Initialising Engine\n";
		
		GLFWwindow* window;
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		window = glfwCreateWindow(800, 600, "Blue Berry game engine test", nullptr, nullptr);
		
		glfwSetKeyCallback(window, glfw_key_callback);
		glfwSetCursorPosCallback(window, glfw_mouse_pos_callback);
		glfwSetMouseButtonCallback(window, glfw_mouse_button_callback);
		glfwSetScrollCallback(window, glfw_mouse_scroll_callback);
		glfwSetDropCallback(window, glfw_drag_drop_callback);
		
		while(!glfwWindowShouldClose(window))
		{
			glfwWaitEvents();
			//glfwPollEvents();
		}
		glfwTerminate();	
	}
}