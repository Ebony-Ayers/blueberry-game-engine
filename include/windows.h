#pragma once

namespace BlueBerry
{
	void glfw_key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
	void glfw_mouse_pos_callback(GLFWwindow* window, double xpos, double ypos);
	void glfw_mouse_button_callback(GLFWwindow* window, int button, int action, int mods);
	void glfw_mouse_scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
	void glfw_drag_drop_callback(GLFWwindow* window, int count, const char** paths);

	//initialise glfw
	int initialise_window();
	//loop for glfw inputs
	int input_handling_loop();

	extern GLFWwindow* main_window;
	extern bool should_close;
}