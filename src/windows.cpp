#include "windows.h"
#include "input.h"

namespace BlueBerry
{
	void glfw_key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		std::cout << "key: " << KEYBOARD_KEY_TO_STRING(key) << (action == 1 ? " pressed" : " released") << std::endl;
		if(action == 1)
		{
			input::key.bool_ptr_pressed[key] = true;
			input::key.bool_ptr_down[key] = true;
		}
		else
		{
			input::key.bool_ptr_released[key] = true;
			input::key.bool_ptr_down[key] = false;
		}
	}
	void glfw_mouse_pos_callback(GLFWwindow* window, double xpos, double ypos)
	{
		std::cout << "mouse pos: (" << xpos << ", " << ypos << ")" << std::endl;

		input::mouse_pos.delta_x = xpos - input::mouse_pos.x;
		input::mouse_pos.delta_y = xpos - input::mouse_pos.y;

		input::mouse_pos.x = xpos;
		input::mouse_pos.y = ypos;
	}
	void glfw_mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
	{
		std::cout << "mouse button: " << MOUSE_BUTTON_TO_STRING(button) << " " << (action == 1 ? " pressed" : " released") << std::endl;
		if(action == 1)
		{
			input::mouse_button.bool_ptr_pressed[button] = true;
			input::mouse_button.bool_ptr_down[button] = true;
		}
		else
		{
			input::mouse_button.bool_ptr_released[button] = true;
			input::mouse_button.bool_ptr_down[button] = false;
		}
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

	GLFWwindow* main_window = nullptr;
    int initialise_window()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		main_window = glfwCreateWindow(800, 600, "Blue Berry game engine test", nullptr, nullptr);
		
		glfwSetKeyCallback(main_window, glfw_key_callback);
		glfwSetCursorPosCallback(main_window, glfw_mouse_pos_callback);
		glfwSetMouseButtonCallback(main_window, glfw_mouse_button_callback);
		glfwSetScrollCallback(main_window, glfw_mouse_scroll_callback);
		glfwSetDropCallback(main_window, glfw_drag_drop_callback);	

		return 0;
	}
	int handle_inputs()
	{
		while(!glfwWindowShouldClose(main_window))
		{
			glfwWaitEvents();
			//glfwPollEvents();
		}
		glfwTerminate();
		
		return 0;
	}
}