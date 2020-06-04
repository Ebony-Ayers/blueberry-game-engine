#pragma once

namespace BlueBerry
{
	void glfw_key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
	void glfw_mouse_pos_callback(GLFWwindow* window, double xpos, double ypos);
	void glfw_mouse_button_callback(GLFWwindow* window, int button, int action, int mods);
	void glfw_mouse_scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
	void glfw_drag_drop_callback(GLFWwindow* window, int count, const char** paths);

	int initialise_window();
	int handle_inputs();

	extern GLFWwindow* main_window;
}