#pragma once

//from GLFW3.h keys

#define BB_KEY_UNKNOWN            -1

#define BB_KEY_SPACE              32
#define BB_KEY_APOSTROPHE         39
#define BB_KEY_COMMA              44
#define BB_KEY_MINUS              45
#define BB_KEY_PERIOD             46
#define BB_KEY_SLASH              47
#define BB_KEY_0                  48
#define BB_KEY_1                  49
#define BB_KEY_2                  50
#define BB_KEY_3                  51
#define BB_KEY_4                  52
#define BB_KEY_5                  53
#define BB_KEY_6                  54
#define BB_KEY_7                  55
#define BB_KEY_8                  56
#define BB_KEY_9                  57
#define BB_KEY_SEMICOLON          59
#define BB_KEY_EQUAL              61
#define BB_KEY_A                  65
#define BB_KEY_B                  66
#define BB_KEY_C                  67
#define BB_KEY_D                  68
#define BB_KEY_E                  69
#define BB_KEY_F                  70
#define BB_KEY_G                  71
#define BB_KEY_H                  72
#define BB_KEY_I                  73
#define BB_KEY_J                  74
#define BB_KEY_K                  75
#define BB_KEY_L                  76
#define BB_KEY_M                  77
#define BB_KEY_N                  78
#define BB_KEY_O                  79
#define BB_KEY_P                  80
#define BB_KEY_Q                  81
#define BB_KEY_R                  82
#define BB_KEY_S                  83
#define BB_KEY_T                  84
#define BB_KEY_U                  85
#define BB_KEY_V                  86
#define BB_KEY_W                  87
#define BB_KEY_X                  88
#define BB_KEY_Y                  89
#define BB_KEY_Z                  90
#define BB_KEY_LEFT_BRACKET       91
#define BB_KEY_BACKSLASH          92
#define BB_KEY_RIGHT_BRACKET      93
#define BB_KEY_GRAVE_ACCENT       96
#define BB_KEY_WORLD_1            161
#define BB_KEY_WORLD_2            162

#define BB_KEY_ESCAPE             256
#define BB_KEY_ENTER              257
#define BB_KEY_TAB                258
#define BB_KEY_BACKSPACE          259
#define BB_KEY_INSERT             260
#define BB_KEY_DELETE             261
#define BB_KEY_RIGHT              262
#define BB_KEY_LEFT               263
#define BB_KEY_DOWN               264
#define BB_KEY_UP                 265
#define BB_KEY_PAGE_UP            266
#define BB_KEY_PAGE_DOWN          267
#define BB_KEY_HOME               268
#define BB_KEY_END                269
#define BB_KEY_CAPS_LOCK          280
#define BB_KEY_SCROLL_LOCK        281
#define BB_KEY_NUM_LOCK           282
#define BB_KEY_PRINT_SCREEN       283
#define BB_KEY_PAUSE              284
#define BB_KEY_F1                 290
#define BB_KEY_F2                 291
#define BB_KEY_F3                 292
#define BB_KEY_F4                 293
#define BB_KEY_F5                 294
#define BB_KEY_F6                 295
#define BB_KEY_F7                 296
#define BB_KEY_F8                 297
#define BB_KEY_F9                 298
#define BB_KEY_F10                299
#define BB_KEY_F11                300
#define BB_KEY_F12                301
#define BB_KEY_F13                302
#define BB_KEY_F14                303
#define BB_KEY_F15                304
#define BB_KEY_F16                305
#define BB_KEY_F17                306
#define BB_KEY_F18                307
#define BB_KEY_F19                308
#define BB_KEY_F20                309
#define BB_KEY_F21                310
#define BB_KEY_F22                311
#define BB_KEY_F23                312
#define BB_KEY_F24                313
#define BB_KEY_F25                314
#define BB_KEY_KP_0               320
#define BB_KEY_KP_1               321
#define BB_KEY_KP_2               322
#define BB_KEY_KP_3               323
#define BB_KEY_KP_4               324
#define BB_KEY_KP_5               325
#define BB_KEY_KP_6               326
#define BB_KEY_KP_7               327
#define BB_KEY_KP_8               328
#define BB_KEY_KP_9               329
#define BB_KEY_KP_DECIMAL         330
#define BB_KEY_KP_DIVIDE          331
#define BB_KEY_KP_MULTIPLY        332
#define BB_KEY_KP_SUBTRACT        333
#define BB_KEY_KP_ADD             334
#define BB_KEY_KP_ENTER           335
#define BB_KEY_KP_EQUAL           336
#define BB_KEY_LEFT_SHIFT         340
#define BB_KEY_LEFT_CONTROL       341
#define BB_KEY_LEFT_ALT           342
#define BB_KEY_LEFT_SUPER         343
#define BB_KEY_RIGHT_SHIFT        344
#define BB_KEY_RIGHT_CONTROL      345
#define BB_KEY_RIGHT_ALT          346
#define BB_KEY_RIGHT_SUPER        347
#define BB_KEY_MENU               348

#define BB_KEY_LAST               BB_KEY_MENU

#define BB_MOD_SHIFT           0x0001
#define BB_MOD_CONTROL         0x0002
#define BB_MOD_ALT             0x0004
#define BB_MOD_SUPER           0x0008
#define BB_MOD_CAPS_LOCK       0x0010
#define BB_MOD_NUM_LOCK        0x0020

#define BB_MOUSE_BUTTON_1         0
#define BB_MOUSE_BUTTON_2         1
#define BB_MOUSE_BUTTON_3         2
#define BB_MOUSE_BUTTON_4         3
#define BB_MOUSE_BUTTON_5         4
#define BB_MOUSE_BUTTON_6         5
#define BB_MOUSE_BUTTON_7         6
#define BB_MOUSE_BUTTON_8         7
#define BB_MOUSE_BUTTON_LAST      BB_MOUSE_BUTTON_8
#define BB_MOUSE_BUTTON_LEFT      BB_MOUSE_BUTTON_1
#define BB_MOUSE_BUTTON_RIGHT     BB_MOUSE_BUTTON_2
#define BB_MOUSE_BUTTON_MIDDLE    BB_MOUSE_BUTTON_3

#define BB_JOYSTICK_1             0
#define BB_JOYSTICK_2             1
#define BB_JOYSTICK_3             2
#define BB_JOYSTICK_4             3
#define BB_JOYSTICK_5             4
#define BB_JOYSTICK_6             5
#define BB_JOYSTICK_7             6
#define BB_JOYSTICK_8             7
#define BB_JOYSTICK_9             8
#define BB_JOYSTICK_10            9
#define BB_JOYSTICK_11            10
#define BB_JOYSTICK_12            11
#define BB_JOYSTICK_13            12
#define BB_JOYSTICK_14            13
#define BB_JOYSTICK_15            14
#define BB_JOYSTICK_16            15
#define BB_JOYSTICK_LAST          BB_JOYSTICK_16

#define BB_GAMEPAD_BUTTON_A               0
#define BB_GAMEPAD_BUTTON_B               1
#define BB_GAMEPAD_BUTTON_X               2
#define BB_GAMEPAD_BUTTON_Y               3
#define BB_GAMEPAD_BUTTON_LEFT_BUMPER     4
#define BB_GAMEPAD_BUTTON_RIGHT_BUMPER    5
#define BB_GAMEPAD_BUTTON_BACK            6
#define BB_GAMEPAD_BUTTON_START           7
#define BB_GAMEPAD_BUTTON_GUIDE           8
#define BB_GAMEPAD_BUTTON_LEFT_THUMB      9
#define BB_GAMEPAD_BUTTON_RIGHT_THUMB     10
#define BB_GAMEPAD_BUTTON_DPAD_UP         11
#define BB_GAMEPAD_BUTTON_DPAD_RIGHT      12
#define BB_GAMEPAD_BUTTON_DPAD_DOWN       13
#define BB_GAMEPAD_BUTTON_DPAD_LEFT       14
#define BB_GAMEPAD_BUTTON_LAST            BB_GAMEPAD_BUTTON_DPAD_LEFT

#define BB_GAMEPAD_BUTTON_CROSS       BB_GAMEPAD_BUTTON_A
#define BB_GAMEPAD_BUTTON_CIRCLE      BB_GAMEPAD_BUTTON_B
#define BB_GAMEPAD_BUTTON_SQUARE      BB_GAMEPAD_BUTTON_X
#define BB_GAMEPAD_BUTTON_TRIANGLE    BB_GAMEPAD_BUTTON_Y

#define BB_GAMEPAD_AXIS_LEFT_X        0
#define BB_GAMEPAD_AXIS_LEFT_Y        1
#define BB_GAMEPAD_AXIS_RIGHT_X       2
#define BB_GAMEPAD_AXIS_RIGHT_Y       3
#define BB_GAMEPAD_AXIS_LEFT_TRIGGER  4
#define BB_GAMEPAD_AXIS_RIGHT_TRIGGER 5
#define BB_GAMEPAD_AXIS_LAST          BB_GAMEPAD_AXIS_RIGHT_TRIGGER

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

	if(key == BB_KEY_MENU) { return "LAST"; }

	if(key == 0x0001) { return "SHIFT"; }
	if(key == 0x0002) { return "CONTROL"; }
	if(key == 0x0004) { return "ALT"; }
	if(key == 0x0008) { return "SUPER"; }
	if(key == 0x0010) { return "CAPS_LOCK"; }
	if(key == 0x0020) { return "NUM_LOCK"; }

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