#include "input.h"

namespace BlueBerry
{
	std::string KEYBOARD_KEY_TO_STRING(int key)
	{
		if(key == -1) { return "UNKNOWN"; }

		if(key == 32) { return "SPACE"; }
		if(key == 39) { return "APOSTROPHE"; }
		if(key == 44) { return "COMMA"; }
		if(key == 45) { return "MINUS"; }
		if(key == 46) { return "PERIOD"; }
		if(key == 47) { return "SLASH"; }
		if(key == 48) { return "0"; }
		if(key == 49) { return "1"; }
		if(key == 50) { return "2"; }
		if(key == 51) { return "3"; }
		if(key == 52) { return "4"; }
		if(key == 53) { return "5"; }
		if(key == 54) { return "6"; }
		if(key == 55) { return "7"; }
		if(key == 56) { return "8"; }
		if(key == 57) { return "9"; }
		if(key == 59) { return "SEMICOLON"; }
		if(key == 61) { return "EQUAL"; }
		if(key == 65) { return "A"; }
		if(key == 66) { return "B"; }
		if(key == 67) { return "C"; }
		if(key == 68) { return "D"; }
		if(key == 69) { return "E"; }
		if(key == 70) { return "F"; }
		if(key == 71) { return "G"; }
		if(key == 72) { return "H"; }
		if(key == 73) { return "I"; }
		if(key == 74) { return "J"; }
		if(key == 75) { return "K"; }
		if(key == 76) { return "L"; }
		if(key == 77) { return "M"; }
		if(key == 78) { return "N"; }
		if(key == 79) { return "O"; }
		if(key == 80) { return "P"; }
		if(key == 81) { return "Q"; }
		if(key == 82) { return "R"; }
		if(key == 83) { return "S"; }
		if(key == 84) { return "T"; }
		if(key == 85) { return "U"; }
		if(key == 86) { return "V"; }
		if(key == 87) { return "W"; }
		if(key == 88) { return "X"; }
		if(key == 89) { return "Y"; }
		if(key == 90) { return "Z"; }
		if(key == 91) { return "LEFT_BRACKET"; }
		if(key == 92) { return "BACKSLASH"; }
		if(key == 93) { return "RIGHT_BRACKET"; }
		if(key == 96) { return "GRAVE_ACCENT"; }
		if(key == 161) { return "WORLD_1"; }
		if(key == 162) { return "WORLD_2"; }

		if(key == 256) { return "ESCAPE"; }
		if(key == 257) { return "ENTER"; }
		if(key == 258) { return "TAB"; }
		if(key == 259) { return "BACKSPACE"; }
		if(key == 260) { return "INSERT"; }
		if(key == 261) { return "DELETE"; }
		if(key == 262) { return "RIGHT"; }
		if(key == 263) { return "LEFT"; }
		if(key == 264) { return "DOWN"; }
		if(key == 265) { return "UP"; }
		if(key == 266) { return "PAGE_UP"; }
		if(key == 267) { return "PAGE_DOWN"; }
		if(key == 268) { return "HOME"; }
		if(key == 269) { return "END"; }
		if(key == 280) { return "CAPS_LOCK"; }
		if(key == 281) { return "SCROLL_LOCK"; }
		if(key == 282) { return "NUM_LOCK"; }
		if(key == 283) { return "PRINT_SCREEN"; }
		if(key == 284) { return "PAUSE"; }
		if(key == 290) { return "F1"; }
		if(key == 291) { return "F2"; }
		if(key == 292) { return "F3"; }
		if(key == 293) { return "F4"; }
		if(key == 294) { return "F5"; }
		if(key == 295) { return "F6"; }
		if(key == 296) { return "F7"; }
		if(key == 297) { return "F8"; }
		if(key == 298) { return "F9"; }
		if(key == 299) { return "F10"; }
		if(key == 300) { return "F11"; }
		if(key == 301) { return "F12"; }
		if(key == 302) { return "F13"; }
		if(key == 303) { return "F14"; }
		if(key == 304) { return "F15"; }
		if(key == 305) { return "F16"; }
		if(key == 306) { return "F17"; }
		if(key == 307) { return "F18"; }
		if(key == 308) { return "F19"; }
		if(key == 309) { return "F20"; }
		if(key == 310) { return "F21"; }
		if(key == 311) { return "F22"; }
		if(key == 312) { return "F23"; }
		if(key == 313) { return "F24"; }
		if(key == 314) { return "F25"; }
		if(key == 320) { return "KP_0"; }
		if(key == 321) { return "KP_1"; }
		if(key == 322) { return "KP_2"; }
		if(key == 323) { return "KP_3"; }
		if(key == 324) { return "KP_4"; }
		if(key == 325) { return "KP_5"; }
		if(key == 326) { return "KP_6"; }
		if(key == 327) { return "KP_7"; }
		if(key == 328) { return "KP_8"; }
		if(key == 329) { return "KP_9"; }
		if(key == 330) { return "KP_DECIMAL"; }
		if(key == 331) { return "KP_DIVIDE"; }
		if(key == 332) { return "KP_MULTIPLY"; }
		if(key == 333) { return "KP_SUBTRACT"; }
		if(key == 334) { return "KP_ADD"; }
		if(key == 335) { return "KP_ENTER"; }
		if(key == 336) { return "KP_EQUAL"; }
		if(key == 340) { return "LEFT_SHIFT"; }
		if(key == 341) { return "LEFT_CONTROL"; }
		if(key == 342) { return "LEFT_ALT"; }
		if(key == 343) { return "LEFT_SUPER"; }
		if(key == 344) { return "RIGHT_SHIFT"; }
		if(key == 345) { return "RIGHT_CONTROL"; }
		if(key == 346) { return "RIGHT_ALT"; }
		if(key == 347) { return "RIGHT_SUPER"; }
		if(key == 348) { return "MENU"; }

		return "Error: no key found";
	}

	std::string MOUSE_BUTTON_TO_STRING(int key)
	{
		if(key == BB_MOUSE_BUTTON_8) { return "MOUSE_LAST"; }
		if(key == BB_MOUSE_BUTTON_1) { return "MOUSE_LEFT"; }
		if(key == BB_MOUSE_BUTTON_2) { return "MOUSE_RIGHT"; }
		if(key == BB_MOUSE_BUTTON_3) { return "MOUSE_MIDDLE"; }
		if(key == 0) { return "MOUSE_1"; }
		if(key == 1) { return "MOUSE_2"; }
		if(key == 2) { return "MOUSE_3"; }
		if(key == 3) { return "MOUSE_4"; }
		if(key == 4) { return "MOUSE_5"; }
		if(key == 5) { return "MOUSE_6"; }
		if(key == 6) { return "MOUSE_7"; }
		if(key == 7) { return "MOUSE_8"; }
		
		return "Error: no key found";
	}

	std::string JOYSTICK_TO_STRING(int key)
	{
		if(key == 0) { return "JOYSTICK_1"; }
		if(key == 1) { return "JOYSTICK_2"; }
		if(key == 2) { return "JOYSTICK_3"; }
		if(key == 3) { return "JOYSTICK_4"; }
		if(key == 4) { return "JOYSTICK_5"; }
		if(key == 5) { return "JOYSTICK_6"; }
		if(key == 6) { return "JOYSTICK_7"; }
		if(key == 7) { return "JOYSTICK_8"; }
		if(key == 8) { return "JOYSTICK_9"; }
		if(key == 9) { return "JOYSTICK_10"; }
		if(key == 10) { return "JOYSTICK_11"; }
		if(key == 11) { return "JOYSTICK_12"; }
		if(key == 12) { return "JOYSTICK_13"; }
		if(key == 13) { return "JOYSTICK_14"; }
		if(key == 14) { return "JOYSTICK_15"; }
		if(key == 15) { return "JOYSTICK_16"; }
		if(key == BB_JOYSTICK_16) { return "JOYSTICK_LAST"; }
			
		return "Error: no key found";
	}

	std::string GAMEPAD_BUTTON_TO_STRING(int key)
	{
		if(key == 0) { return "GAMEPAD_A"; }
		if(key == 1) { return "GAMEPAD_B"; }
		if(key == 2) { return "GAMEPAD_X"; }
		if(key == 3) { return "GAMEPAD_Y"; }
		if(key == 4) { return "GAMEPAD_LEFT_BUMPER"; }
		if(key == 5) { return "GAMEPAD_RIGHT_BUMPER"; }
		if(key == 6) { return "GAMEPAD_BACK"; }
		if(key == 7) { return "GAMEPAD_START"; }
		if(key == 8) { return "GAMEPAD_GUIDE"; }
		if(key == 9) { return "GAMEPAD_LEFT_THUMB"; }
		if(key == 10) { return "GAMEPAD_RIGHT_THUMB"; }
		if(key == 11) { return "GAMEPAD_DPAD_UP"; }
		if(key == 12) { return "GAMEPAD_DPAD_RIGHT"; }
		if(key == 13) { return "GAMEPAD_DPAD_DOWN"; }
		if(key == 14) { return "GAMEPAD_DPAD_LEFT"; }
		if(key == BB_GAMEPAD_BUTTON_DPAD_LEFT) { return "GAMEPAD_LAST"; }

		if(key == BB_GAMEPAD_BUTTON_A) { return "GAMEPAD_CROSS"; }
		if(key == BB_GAMEPAD_BUTTON_B) { return "GAMEPAD_CIRCLE"; }
		if(key == BB_GAMEPAD_BUTTON_X) { return "GAMEPAD_SQUARE"; }
		if(key == BB_GAMEPAD_BUTTON_Y) { return "GAMEPAD_TRIANGLE"; }
				
		return "Error: no key found";
	}

	std::string GAMEPAD_AXIS_TO_STRING(int key)
	{
		if(key == 0) { return "GAMEPAD_AXIS_LEFT_X"; }
		if(key == 1) { return "GAMEPAD_AXIS_LEFT_Y"; }
		if(key == 2) { return "GAMEPAD_AXIS_RIGHT_X"; }
		if(key == 3) { return "GAMEPAD_AXIS_RIGHT_Y"; }
		if(key == 4) { return "GAMEPAD_AXIS_LEFT_TRIGGER"; }
		if(key == 5) { return "GAMEPAD_AXIS_RIGHT_TRIGGER"; }
		if(key == BB_GAMEPAD_AXIS_RIGHT_TRIGGER) { return "GAMEPAD_AXIS_LAST"; }
					
		return "Error: no key found";
	}
		
	namespace input
	{
		
		void s_key::reset_pressed()
		{
		memset(this->bool_ptr_pressed, false, this->num_keys);
		}
		void s_key::reset_released()
		{
		memset(this->bool_ptr_released, false, this->num_keys);
		}
		void s_key::reset_down()
		{
		memset(this->bool_ptr_down, false, this->num_keys);
		}
		s_key::s_key()
		{
			this->num_keys = 350;
			this->bool_ptr_pressed = (bool*)(&(this->pressed));
			this->bool_ptr_released = (bool*)(&(this->released));
			this->bool_ptr_down  = (bool*)(&(this->down));
			this->reset_pressed();
			this->reset_released();
			this->reset_down();
		}
		void s_mouse_button::reset_pressed()
		{
		memset(this->bool_ptr_pressed, false, this->num_keys);
		}
		void s_mouse_button::reset_released()
		{
		memset(this->bool_ptr_released, false, this->num_keys);
		}
		void s_mouse_button::reset_down()
		{
		memset(this->bool_ptr_down, false, this->num_keys);
		}
		s_mouse_button::s_mouse_button()
		{
			this->num_keys = 8;
			this->bool_ptr_pressed = (bool*)(&(this->pressed));
			this->bool_ptr_released = (bool*)(&(this->released));
			this->bool_ptr_down  = (bool*)(&(this->down));
			this->reset_pressed();
			this->reset_released();
			this->reset_down();
		}
		void s_joystick::reset_pressed()
		{
		memset(this->bool_ptr_pressed, false, this->num_keys);
		}
		void s_joystick::reset_released()
		{
		memset(this->bool_ptr_released, false, this->num_keys);
		}
		void s_joystick::reset_down()
		{
		memset(this->bool_ptr_down, false, this->num_keys);
		}
		s_joystick::s_joystick()
		{
			this->num_keys = 16;
			this->bool_ptr_pressed = (bool*)(&(this->pressed));
			this->bool_ptr_released = (bool*)(&(this->released));
			this->bool_ptr_down  = (bool*)(&(this->down));
			this->reset_pressed();
			this->reset_released();
			this->reset_down();
		}
		void s_game_pad_button::reset_pressed()
		{
		memset(this->bool_ptr_pressed, false, this->num_keys);
		}
		void s_game_pad_button::reset_released()
		{
		memset(this->bool_ptr_released, false, this->num_keys);
		}
		void s_game_pad_button::reset_down()
		{
		memset(this->bool_ptr_down, false, this->num_keys);
		}
		s_game_pad_button::s_game_pad_button()
		{
			this->num_keys = 15;
			this->bool_ptr_pressed = (bool*)(&(this->pressed));
			this->bool_ptr_released = (bool*)(&(this->released));
			this->bool_ptr_down  = (bool*)(&(this->down));
			this->reset_pressed();
			this->reset_released();
			this->reset_down();
		}
		void s_game_pad_axix::reset_pressed()
		{
		memset(this->bool_ptr_pressed, false, this->num_keys);
		}
		void s_game_pad_axix::reset_released()
		{
		memset(this->bool_ptr_released, false, this->num_keys);
		}
		void s_game_pad_axix::reset_down()
		{
		memset(this->bool_ptr_down, false, this->num_keys);
		}
		s_game_pad_axix::s_game_pad_axix()
		{
			this->num_keys = 6;
			this->bool_ptr_pressed = (bool*)(&(this->pressed));
			this->bool_ptr_released = (bool*)(&(this->released));
			this->bool_ptr_down  = (bool*)(&(this->down));
			this->reset_pressed();
			this->reset_released();
			this->reset_down();
		}
		s_key key = s_key();
		s_mouse_button mouse_button = s_mouse_button();
		s_joystick joystick = s_joystick();
		s_game_pad_button game_pad_button = s_game_pad_button();
		s_game_pad_axix game_pad_axix = s_game_pad_axix();


		void s_mouse_pos::reset_abs_pos()
		{
			this->x = 0.0d;
			this->y = 0.0d;
		}
		void s_mouse_pos::reset_delta_pos()
		{
			this->delta_x = 0.0d;
			this->delta_y = 0.0d;
		}
		s_mouse_pos::s_mouse_pos()
		{
			double* double_ptr = (double*)(this);
			size_t num_coords = 4;
			this->reset_abs_pos();
			this->reset_delta_pos();
		}

		s_mouse_pos mouse_pos = s_mouse_pos();

		void debug_print_keys_pressed()
		{
			
			std::cout << "==========================================================================\n";
			std::cout << "printing keys pressed\n";
			for(int i = 0; i < key.num_keys; i++)
			{
				std::cout << "\t" << KEYBOARD_KEY_TO_STRING(i) << " pressed = " << (key.bool_ptr_pressed[i] == true ? "true" : "false") << "\n";
			}
			std::cout << "==========================================================================\n";
		}
		void debug_print_keys_released()
		{
			std::cout << "==========================================================================\n";
			std::cout << "printing keys released\n";
			for(int i = 0; i < key.num_keys; i++)
			{
				std::cout << "\t" << KEYBOARD_KEY_TO_STRING(i) << " released = " << (key.bool_ptr_released[i] == true ? "true" : "false") << "\n";
			}
			std::cout << "==========================================================================\n";
		}
		void debug_print_keys_down()
		{
			std::cout << "==========================================================================\n";
			std::cout << "printing keys down\n";
			for(int i = 0; i < key.num_keys; i++)
			{
				std::cout << "\t" << KEYBOARD_KEY_TO_STRING(i) << " down = " << (key.bool_ptr_down[i] == true ? "true" : "false") << "\n";
			}
			std::cout << "==========================================================================\n";
		}
	}
}
