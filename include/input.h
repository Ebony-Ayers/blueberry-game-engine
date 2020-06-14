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

namespace BlueBerry
{
	std::string KEYBOARD_KEY_TO_STRING(int key);
	std::string MOUSE_BUTTON_TO_STRING(int key);
	std::string JOYSTICK_TO_STRING(int key);
	std::string GAMEPAD_BUTTON_TO_STRING(int key);
	std::string GAMEPAD_AXIS_TO_STRING(int key);
	
	namespace input
	{
		struct s_key
		{
			struct
			{
				bool PLACE_HOLDER_0;
				bool PLACE_HOLDER_1;
				bool PLACE_HOLDER_2;
				bool PLACE_HOLDER_3;
				bool PLACE_HOLDER_4;
				bool PLACE_HOLDER_5;
				bool PLACE_HOLDER_6;
				bool PLACE_HOLDER_7;
				bool PLACE_HOLDER_8;
				bool PLACE_HOLDER_9;
				bool PLACE_HOLDER_10;
				bool PLACE_HOLDER_11;
				bool PLACE_HOLDER_12;
				bool PLACE_HOLDER_13;
				bool PLACE_HOLDER_14;
				bool PLACE_HOLDER_15;
				bool PLACE_HOLDER_16;
				bool PLACE_HOLDER_17;
				bool PLACE_HOLDER_18;
				bool PLACE_HOLDER_19;
				bool PLACE_HOLDER_20;
				bool PLACE_HOLDER_21;
				bool PLACE_HOLDER_22;
				bool PLACE_HOLDER_23;
				bool PLACE_HOLDER_24;
				bool PLACE_HOLDER_25;
				bool PLACE_HOLDER_26;
				bool PLACE_HOLDER_27;
				bool PLACE_HOLDER_28;
				bool PLACE_HOLDER_29;
				bool PLACE_HOLDER_30;
				bool PLACE_HOLDER_31;
				bool SPACE;
				bool PLACE_HOLDER_32;
				bool PLACE_HOLDER_33;
				bool PLACE_HOLDER_34;
				bool PLACE_HOLDER_35;
				bool PLACE_HOLDER_36;
				bool PLACE_HOLDER_37;
				bool APOSTROPHE;
				bool PLACE_HOLDER_38;
				bool PLACE_HOLDER_39;
				bool PLACE_HOLDER_40;
				bool PLACE_HOLDER_41;
				bool COMMA;
				bool MINUS;
				bool PERIOD;
				bool SLASH;
				bool NUM_0;
				bool NUM_1;
				bool NUM_2;
				bool NUM_3;
				bool NUM_4;
				bool NUM_5;
				bool NUM_6;
				bool NUM_7;
				bool NUM_8;
				bool NUM_9;
				bool PLACE_HOLDER_42;
				bool SEMICOLON;
				bool PLACE_HOLDER_43;
				bool EQUAL;
				bool PLACE_HOLDER_44;
				bool PLACE_HOLDER_45;
				bool PLACE_HOLDER_46;
				bool A;
				bool B;
				bool C;
				bool D;
				bool E;
				bool F;
				bool G;
				bool H;
				bool I;
				bool J;
				bool K;
				bool L;
				bool M;
				bool N;
				bool O;
				bool P;
				bool Q;
				bool R;
				bool S;
				bool T;
				bool U;
				bool V;
				bool W;
				bool X;
				bool Y;
				bool Z;
				bool LEFT_BRACKET;
				bool BACKSLASH;
				bool RIGHT_BRACKET;
				bool PLACE_HOLDER_47;
				bool PLACE_HOLDER_48;
				bool GRAVE_ACCENT;
				bool PLACE_HOLDER_49;
				bool PLACE_HOLDER_50;
				bool PLACE_HOLDER_51;
				bool PLACE_HOLDER_52;
				bool PLACE_HOLDER_53;
				bool PLACE_HOLDER_54;
				bool PLACE_HOLDER_55;
				bool PLACE_HOLDER_56;
				bool PLACE_HOLDER_57;
				bool PLACE_HOLDER_58;
				bool PLACE_HOLDER_59;
				bool PLACE_HOLDER_60;
				bool PLACE_HOLDER_61;
				bool PLACE_HOLDER_62;
				bool PLACE_HOLDER_63;
				bool PLACE_HOLDER_64;
				bool PLACE_HOLDER_65;
				bool PLACE_HOLDER_66;
				bool PLACE_HOLDER_67;
				bool PLACE_HOLDER_68;
				bool PLACE_HOLDER_69;
				bool PLACE_HOLDER_70;
				bool PLACE_HOLDER_71;
				bool PLACE_HOLDER_72;
				bool PLACE_HOLDER_73;
				bool PLACE_HOLDER_74;
				bool PLACE_HOLDER_75;
				bool PLACE_HOLDER_76;
				bool PLACE_HOLDER_77;
				bool PLACE_HOLDER_78;
				bool PLACE_HOLDER_79;
				bool PLACE_HOLDER_80;
				bool PLACE_HOLDER_81;
				bool PLACE_HOLDER_82;
				bool PLACE_HOLDER_83;
				bool PLACE_HOLDER_84;
				bool PLACE_HOLDER_85;
				bool PLACE_HOLDER_86;
				bool PLACE_HOLDER_87;
				bool PLACE_HOLDER_88;
				bool PLACE_HOLDER_89;
				bool PLACE_HOLDER_90;
				bool PLACE_HOLDER_91;
				bool PLACE_HOLDER_92;
				bool PLACE_HOLDER_93;
				bool PLACE_HOLDER_94;
				bool PLACE_HOLDER_95;
				bool PLACE_HOLDER_96;
				bool PLACE_HOLDER_97;
				bool PLACE_HOLDER_98;
				bool PLACE_HOLDER_99;
				bool PLACE_HOLDER_100;
				bool PLACE_HOLDER_101;
				bool PLACE_HOLDER_102;
				bool PLACE_HOLDER_103;
				bool PLACE_HOLDER_104;
				bool PLACE_HOLDER_105;
				bool PLACE_HOLDER_106;
				bool PLACE_HOLDER_107;
				bool PLACE_HOLDER_108;
				bool PLACE_HOLDER_109;
				bool PLACE_HOLDER_110;
				bool PLACE_HOLDER_111;
				bool PLACE_HOLDER_112;
				bool WORLD_1;
				bool WORLD_2;
				bool PLACE_HOLDER_113;
				bool PLACE_HOLDER_114;
				bool PLACE_HOLDER_115;
				bool PLACE_HOLDER_116;
				bool PLACE_HOLDER_117;
				bool PLACE_HOLDER_118;
				bool PLACE_HOLDER_119;
				bool PLACE_HOLDER_120;
				bool PLACE_HOLDER_121;
				bool PLACE_HOLDER_122;
				bool PLACE_HOLDER_123;
				bool PLACE_HOLDER_124;
				bool PLACE_HOLDER_125;
				bool PLACE_HOLDER_126;
				bool PLACE_HOLDER_127;
				bool PLACE_HOLDER_128;
				bool PLACE_HOLDER_129;
				bool PLACE_HOLDER_130;
				bool PLACE_HOLDER_131;
				bool PLACE_HOLDER_132;
				bool PLACE_HOLDER_133;
				bool PLACE_HOLDER_134;
				bool PLACE_HOLDER_135;
				bool PLACE_HOLDER_136;
				bool PLACE_HOLDER_137;
				bool PLACE_HOLDER_138;
				bool PLACE_HOLDER_139;
				bool PLACE_HOLDER_140;
				bool PLACE_HOLDER_141;
				bool PLACE_HOLDER_142;
				bool PLACE_HOLDER_143;
				bool PLACE_HOLDER_144;
				bool PLACE_HOLDER_145;
				bool PLACE_HOLDER_146;
				bool PLACE_HOLDER_147;
				bool PLACE_HOLDER_148;
				bool PLACE_HOLDER_149;
				bool PLACE_HOLDER_150;
				bool PLACE_HOLDER_151;
				bool PLACE_HOLDER_152;
				bool PLACE_HOLDER_153;
				bool PLACE_HOLDER_154;
				bool PLACE_HOLDER_155;
				bool PLACE_HOLDER_156;
				bool PLACE_HOLDER_157;
				bool PLACE_HOLDER_158;
				bool PLACE_HOLDER_159;
				bool PLACE_HOLDER_160;
				bool PLACE_HOLDER_161;
				bool PLACE_HOLDER_162;
				bool PLACE_HOLDER_163;
				bool PLACE_HOLDER_164;
				bool PLACE_HOLDER_165;
				bool PLACE_HOLDER_166;
				bool PLACE_HOLDER_167;
				bool PLACE_HOLDER_168;
				bool PLACE_HOLDER_169;
				bool PLACE_HOLDER_170;
				bool PLACE_HOLDER_171;
				bool PLACE_HOLDER_172;
				bool PLACE_HOLDER_173;
				bool PLACE_HOLDER_174;
				bool PLACE_HOLDER_175;
				bool PLACE_HOLDER_176;
				bool PLACE_HOLDER_177;
				bool PLACE_HOLDER_178;
				bool PLACE_HOLDER_179;
				bool PLACE_HOLDER_180;
				bool PLACE_HOLDER_181;
				bool PLACE_HOLDER_182;
				bool PLACE_HOLDER_183;
				bool PLACE_HOLDER_184;
				bool PLACE_HOLDER_185;
				bool PLACE_HOLDER_186;
				bool PLACE_HOLDER_187;
				bool PLACE_HOLDER_188;
				bool PLACE_HOLDER_189;
				bool PLACE_HOLDER_190;
				bool PLACE_HOLDER_191;
				bool PLACE_HOLDER_192;
				bool PLACE_HOLDER_193;
				bool PLACE_HOLDER_194;
				bool PLACE_HOLDER_195;
				bool PLACE_HOLDER_196;
				bool PLACE_HOLDER_197;
				bool PLACE_HOLDER_198;
				bool PLACE_HOLDER_199;
				bool PLACE_HOLDER_200;
				bool PLACE_HOLDER_201;
				bool PLACE_HOLDER_202;
				bool PLACE_HOLDER_203;
				bool PLACE_HOLDER_204;
				bool PLACE_HOLDER_205;
				bool ESCAPE;
				bool ENTER;
				bool TAB;
				bool BACKSPACE;
				bool INSERT;
				bool DELETE;
				bool RIGHT;
				bool LEFT;
				bool DOWN;
				bool UP;
				bool PAGE_UP;
				bool PAGE_DOWN;
				bool HOME;
				bool END;
				bool PLACE_HOLDER_206;
				bool PLACE_HOLDER_207;
				bool PLACE_HOLDER_208;
				bool PLACE_HOLDER_209;
				bool PLACE_HOLDER_210;
				bool PLACE_HOLDER_211;
				bool PLACE_HOLDER_212;
				bool PLACE_HOLDER_213;
				bool PLACE_HOLDER_214;
				bool PLACE_HOLDER_215;
				bool CAPS_LOCK;
				bool SCROLL_LOCK;
				bool NUM_LOCK;
				bool PRINT_SCREEN;
				bool PAUSE;
				bool PLACE_HOLDER_216;
				bool PLACE_HOLDER_217;
				bool PLACE_HOLDER_218;
				bool PLACE_HOLDER_219;
				bool PLACE_HOLDER_220;
				bool F1;
				bool F2;
				bool F3;
				bool F4;
				bool F5;
				bool F6;
				bool F7;
				bool F8;
				bool F9;
				bool F10;
				bool F11;
				bool F12;
				bool F13;
				bool F14;
				bool F15;
				bool F16;
				bool F17;
				bool F18;
				bool F19;
				bool F20;
				bool F21;
				bool F22;
				bool F23;
				bool F24;
				bool F25;
				bool PLACE_HOLDER_221;
				bool PLACE_HOLDER_222;
				bool PLACE_HOLDER_223;
				bool PLACE_HOLDER_224;
				bool PLACE_HOLDER_225;
				bool KP_0;
				bool KP_1;
				bool KP_2;
				bool KP_3;
				bool KP_4;
				bool KP_5;
				bool KP_6;
				bool KP_7;
				bool KP_8;
				bool KP_9;
				bool KP_DECIMAL;
				bool KP_DIVIDE;
				bool KP_MULTIPLY;
				bool KP_SUBTRACT;
				bool KP_ADD;
				bool KP_ENTER;
				bool KP_EQUAL;
				bool PLACE_HOLDER_226;
				bool PLACE_HOLDER_227;
				bool PLACE_HOLDER_228;
				bool LEFT_SHIFT;
				bool LEFT_CONTROL;
				bool LEFT_ALT;
				bool LEFT_SUPER;
				bool RIGHT_SHIFT;
				bool RIGHT_CONTROL;
				bool RIGHT_ALT;
				bool RIGHT_SUPER;
				bool MENU;
				bool UNKNOWN;
			} pressed;
			bool* bool_ptr_pressed;
		
			struct
			{
				bool PLACE_HOLDER_0;
				bool PLACE_HOLDER_1;
				bool PLACE_HOLDER_2;
				bool PLACE_HOLDER_3;
				bool PLACE_HOLDER_4;
				bool PLACE_HOLDER_5;
				bool PLACE_HOLDER_6;
				bool PLACE_HOLDER_7;
				bool PLACE_HOLDER_8;
				bool PLACE_HOLDER_9;
				bool PLACE_HOLDER_10;
				bool PLACE_HOLDER_11;
				bool PLACE_HOLDER_12;
				bool PLACE_HOLDER_13;
				bool PLACE_HOLDER_14;
				bool PLACE_HOLDER_15;
				bool PLACE_HOLDER_16;
				bool PLACE_HOLDER_17;
				bool PLACE_HOLDER_18;
				bool PLACE_HOLDER_19;
				bool PLACE_HOLDER_20;
				bool PLACE_HOLDER_21;
				bool PLACE_HOLDER_22;
				bool PLACE_HOLDER_23;
				bool PLACE_HOLDER_24;
				bool PLACE_HOLDER_25;
				bool PLACE_HOLDER_26;
				bool PLACE_HOLDER_27;
				bool PLACE_HOLDER_28;
				bool PLACE_HOLDER_29;
				bool PLACE_HOLDER_30;
				bool PLACE_HOLDER_31;
				bool SPACE;
				bool PLACE_HOLDER_32;
				bool PLACE_HOLDER_33;
				bool PLACE_HOLDER_34;
				bool PLACE_HOLDER_35;
				bool PLACE_HOLDER_36;
				bool PLACE_HOLDER_37;
				bool APOSTROPHE;
				bool PLACE_HOLDER_38;
				bool PLACE_HOLDER_39;
				bool PLACE_HOLDER_40;
				bool PLACE_HOLDER_41;
				bool COMMA;
				bool MINUS;
				bool PERIOD;
				bool SLASH;
				bool NUM_0;
				bool NUM_1;
				bool NUM_2;
				bool NUM_3;
				bool NUM_4;
				bool NUM_5;
				bool NUM_6;
				bool NUM_7;
				bool NUM_8;
				bool NUM_9;
				bool PLACE_HOLDER_42;
				bool SEMICOLON;
				bool PLACE_HOLDER_43;
				bool EQUAL;
				bool PLACE_HOLDER_44;
				bool PLACE_HOLDER_45;
				bool PLACE_HOLDER_46;
				bool A;
				bool B;
				bool C;
				bool D;
				bool E;
				bool F;
				bool G;
				bool H;
				bool I;
				bool J;
				bool K;
				bool L;
				bool M;
				bool N;
				bool O;
				bool P;
				bool Q;
				bool R;
				bool S;
				bool T;
				bool U;
				bool V;
				bool W;
				bool X;
				bool Y;
				bool Z;
				bool LEFT_BRACKET;
				bool BACKSLASH;
				bool RIGHT_BRACKET;
				bool PLACE_HOLDER_47;
				bool PLACE_HOLDER_48;
				bool GRAVE_ACCENT;
				bool PLACE_HOLDER_49;
				bool PLACE_HOLDER_50;
				bool PLACE_HOLDER_51;
				bool PLACE_HOLDER_52;
				bool PLACE_HOLDER_53;
				bool PLACE_HOLDER_54;
				bool PLACE_HOLDER_55;
				bool PLACE_HOLDER_56;
				bool PLACE_HOLDER_57;
				bool PLACE_HOLDER_58;
				bool PLACE_HOLDER_59;
				bool PLACE_HOLDER_60;
				bool PLACE_HOLDER_61;
				bool PLACE_HOLDER_62;
				bool PLACE_HOLDER_63;
				bool PLACE_HOLDER_64;
				bool PLACE_HOLDER_65;
				bool PLACE_HOLDER_66;
				bool PLACE_HOLDER_67;
				bool PLACE_HOLDER_68;
				bool PLACE_HOLDER_69;
				bool PLACE_HOLDER_70;
				bool PLACE_HOLDER_71;
				bool PLACE_HOLDER_72;
				bool PLACE_HOLDER_73;
				bool PLACE_HOLDER_74;
				bool PLACE_HOLDER_75;
				bool PLACE_HOLDER_76;
				bool PLACE_HOLDER_77;
				bool PLACE_HOLDER_78;
				bool PLACE_HOLDER_79;
				bool PLACE_HOLDER_80;
				bool PLACE_HOLDER_81;
				bool PLACE_HOLDER_82;
				bool PLACE_HOLDER_83;
				bool PLACE_HOLDER_84;
				bool PLACE_HOLDER_85;
				bool PLACE_HOLDER_86;
				bool PLACE_HOLDER_87;
				bool PLACE_HOLDER_88;
				bool PLACE_HOLDER_89;
				bool PLACE_HOLDER_90;
				bool PLACE_HOLDER_91;
				bool PLACE_HOLDER_92;
				bool PLACE_HOLDER_93;
				bool PLACE_HOLDER_94;
				bool PLACE_HOLDER_95;
				bool PLACE_HOLDER_96;
				bool PLACE_HOLDER_97;
				bool PLACE_HOLDER_98;
				bool PLACE_HOLDER_99;
				bool PLACE_HOLDER_100;
				bool PLACE_HOLDER_101;
				bool PLACE_HOLDER_102;
				bool PLACE_HOLDER_103;
				bool PLACE_HOLDER_104;
				bool PLACE_HOLDER_105;
				bool PLACE_HOLDER_106;
				bool PLACE_HOLDER_107;
				bool PLACE_HOLDER_108;
				bool PLACE_HOLDER_109;
				bool PLACE_HOLDER_110;
				bool PLACE_HOLDER_111;
				bool PLACE_HOLDER_112;
				bool WORLD_1;
				bool WORLD_2;
				bool PLACE_HOLDER_113;
				bool PLACE_HOLDER_114;
				bool PLACE_HOLDER_115;
				bool PLACE_HOLDER_116;
				bool PLACE_HOLDER_117;
				bool PLACE_HOLDER_118;
				bool PLACE_HOLDER_119;
				bool PLACE_HOLDER_120;
				bool PLACE_HOLDER_121;
				bool PLACE_HOLDER_122;
				bool PLACE_HOLDER_123;
				bool PLACE_HOLDER_124;
				bool PLACE_HOLDER_125;
				bool PLACE_HOLDER_126;
				bool PLACE_HOLDER_127;
				bool PLACE_HOLDER_128;
				bool PLACE_HOLDER_129;
				bool PLACE_HOLDER_130;
				bool PLACE_HOLDER_131;
				bool PLACE_HOLDER_132;
				bool PLACE_HOLDER_133;
				bool PLACE_HOLDER_134;
				bool PLACE_HOLDER_135;
				bool PLACE_HOLDER_136;
				bool PLACE_HOLDER_137;
				bool PLACE_HOLDER_138;
				bool PLACE_HOLDER_139;
				bool PLACE_HOLDER_140;
				bool PLACE_HOLDER_141;
				bool PLACE_HOLDER_142;
				bool PLACE_HOLDER_143;
				bool PLACE_HOLDER_144;
				bool PLACE_HOLDER_145;
				bool PLACE_HOLDER_146;
				bool PLACE_HOLDER_147;
				bool PLACE_HOLDER_148;
				bool PLACE_HOLDER_149;
				bool PLACE_HOLDER_150;
				bool PLACE_HOLDER_151;
				bool PLACE_HOLDER_152;
				bool PLACE_HOLDER_153;
				bool PLACE_HOLDER_154;
				bool PLACE_HOLDER_155;
				bool PLACE_HOLDER_156;
				bool PLACE_HOLDER_157;
				bool PLACE_HOLDER_158;
				bool PLACE_HOLDER_159;
				bool PLACE_HOLDER_160;
				bool PLACE_HOLDER_161;
				bool PLACE_HOLDER_162;
				bool PLACE_HOLDER_163;
				bool PLACE_HOLDER_164;
				bool PLACE_HOLDER_165;
				bool PLACE_HOLDER_166;
				bool PLACE_HOLDER_167;
				bool PLACE_HOLDER_168;
				bool PLACE_HOLDER_169;
				bool PLACE_HOLDER_170;
				bool PLACE_HOLDER_171;
				bool PLACE_HOLDER_172;
				bool PLACE_HOLDER_173;
				bool PLACE_HOLDER_174;
				bool PLACE_HOLDER_175;
				bool PLACE_HOLDER_176;
				bool PLACE_HOLDER_177;
				bool PLACE_HOLDER_178;
				bool PLACE_HOLDER_179;
				bool PLACE_HOLDER_180;
				bool PLACE_HOLDER_181;
				bool PLACE_HOLDER_182;
				bool PLACE_HOLDER_183;
				bool PLACE_HOLDER_184;
				bool PLACE_HOLDER_185;
				bool PLACE_HOLDER_186;
				bool PLACE_HOLDER_187;
				bool PLACE_HOLDER_188;
				bool PLACE_HOLDER_189;
				bool PLACE_HOLDER_190;
				bool PLACE_HOLDER_191;
				bool PLACE_HOLDER_192;
				bool PLACE_HOLDER_193;
				bool PLACE_HOLDER_194;
				bool PLACE_HOLDER_195;
				bool PLACE_HOLDER_196;
				bool PLACE_HOLDER_197;
				bool PLACE_HOLDER_198;
				bool PLACE_HOLDER_199;
				bool PLACE_HOLDER_200;
				bool PLACE_HOLDER_201;
				bool PLACE_HOLDER_202;
				bool PLACE_HOLDER_203;
				bool PLACE_HOLDER_204;
				bool PLACE_HOLDER_205;
				bool ESCAPE;
				bool ENTER;
				bool TAB;
				bool BACKSPACE;
				bool INSERT;
				bool DELETE;
				bool RIGHT;
				bool LEFT;
				bool DOWN;
				bool UP;
				bool PAGE_UP;
				bool PAGE_DOWN;
				bool HOME;
				bool END;
				bool PLACE_HOLDER_206;
				bool PLACE_HOLDER_207;
				bool PLACE_HOLDER_208;
				bool PLACE_HOLDER_209;
				bool PLACE_HOLDER_210;
				bool PLACE_HOLDER_211;
				bool PLACE_HOLDER_212;
				bool PLACE_HOLDER_213;
				bool PLACE_HOLDER_214;
				bool PLACE_HOLDER_215;
				bool CAPS_LOCK;
				bool SCROLL_LOCK;
				bool NUM_LOCK;
				bool PRINT_SCREEN;
				bool PAUSE;
				bool PLACE_HOLDER_216;
				bool PLACE_HOLDER_217;
				bool PLACE_HOLDER_218;
				bool PLACE_HOLDER_219;
				bool PLACE_HOLDER_220;
				bool F1;
				bool F2;
				bool F3;
				bool F4;
				bool F5;
				bool F6;
				bool F7;
				bool F8;
				bool F9;
				bool F10;
				bool F11;
				bool F12;
				bool F13;
				bool F14;
				bool F15;
				bool F16;
				bool F17;
				bool F18;
				bool F19;
				bool F20;
				bool F21;
				bool F22;
				bool F23;
				bool F24;
				bool F25;
				bool PLACE_HOLDER_221;
				bool PLACE_HOLDER_222;
				bool PLACE_HOLDER_223;
				bool PLACE_HOLDER_224;
				bool PLACE_HOLDER_225;
				bool KP_0;
				bool KP_1;
				bool KP_2;
				bool KP_3;
				bool KP_4;
				bool KP_5;
				bool KP_6;
				bool KP_7;
				bool KP_8;
				bool KP_9;
				bool KP_DECIMAL;
				bool KP_DIVIDE;
				bool KP_MULTIPLY;
				bool KP_SUBTRACT;
				bool KP_ADD;
				bool KP_ENTER;
				bool KP_EQUAL;
				bool PLACE_HOLDER_226;
				bool PLACE_HOLDER_227;
				bool PLACE_HOLDER_228;
				bool LEFT_SHIFT;
				bool LEFT_CONTROL;
				bool LEFT_ALT;
				bool LEFT_SUPER;
				bool RIGHT_SHIFT;
				bool RIGHT_CONTROL;
				bool RIGHT_ALT;
				bool RIGHT_SUPER;
				bool MENU;
				bool UNKNOWN;
			} released;
			bool* bool_ptr_released;
		
			struct
			{
				bool PLACE_HOLDER_0;
				bool PLACE_HOLDER_1;
				bool PLACE_HOLDER_2;
				bool PLACE_HOLDER_3;
				bool PLACE_HOLDER_4;
				bool PLACE_HOLDER_5;
				bool PLACE_HOLDER_6;
				bool PLACE_HOLDER_7;
				bool PLACE_HOLDER_8;
				bool PLACE_HOLDER_9;
				bool PLACE_HOLDER_10;
				bool PLACE_HOLDER_11;
				bool PLACE_HOLDER_12;
				bool PLACE_HOLDER_13;
				bool PLACE_HOLDER_14;
				bool PLACE_HOLDER_15;
				bool PLACE_HOLDER_16;
				bool PLACE_HOLDER_17;
				bool PLACE_HOLDER_18;
				bool PLACE_HOLDER_19;
				bool PLACE_HOLDER_20;
				bool PLACE_HOLDER_21;
				bool PLACE_HOLDER_22;
				bool PLACE_HOLDER_23;
				bool PLACE_HOLDER_24;
				bool PLACE_HOLDER_25;
				bool PLACE_HOLDER_26;
				bool PLACE_HOLDER_27;
				bool PLACE_HOLDER_28;
				bool PLACE_HOLDER_29;
				bool PLACE_HOLDER_30;
				bool PLACE_HOLDER_31;
				bool SPACE;
				bool PLACE_HOLDER_32;
				bool PLACE_HOLDER_33;
				bool PLACE_HOLDER_34;
				bool PLACE_HOLDER_35;
				bool PLACE_HOLDER_36;
				bool PLACE_HOLDER_37;
				bool APOSTROPHE;
				bool PLACE_HOLDER_38;
				bool PLACE_HOLDER_39;
				bool PLACE_HOLDER_40;
				bool PLACE_HOLDER_41;
				bool COMMA;
				bool MINUS;
				bool PERIOD;
				bool SLASH;
				bool NUM_0;
				bool NUM_1;
				bool NUM_2;
				bool NUM_3;
				bool NUM_4;
				bool NUM_5;
				bool NUM_6;
				bool NUM_7;
				bool NUM_8;
				bool NUM_9;
				bool PLACE_HOLDER_42;
				bool SEMICOLON;
				bool PLACE_HOLDER_43;
				bool EQUAL;
				bool PLACE_HOLDER_44;
				bool PLACE_HOLDER_45;
				bool PLACE_HOLDER_46;
				bool A;
				bool B;
				bool C;
				bool D;
				bool E;
				bool F;
				bool G;
				bool H;
				bool I;
				bool J;
				bool K;
				bool L;
				bool M;
				bool N;
				bool O;
				bool P;
				bool Q;
				bool R;
				bool S;
				bool T;
				bool U;
				bool V;
				bool W;
				bool X;
				bool Y;
				bool Z;
				bool LEFT_BRACKET;
				bool BACKSLASH;
				bool RIGHT_BRACKET;
				bool PLACE_HOLDER_47;
				bool PLACE_HOLDER_48;
				bool GRAVE_ACCENT;
				bool PLACE_HOLDER_49;
				bool PLACE_HOLDER_50;
				bool PLACE_HOLDER_51;
				bool PLACE_HOLDER_52;
				bool PLACE_HOLDER_53;
				bool PLACE_HOLDER_54;
				bool PLACE_HOLDER_55;
				bool PLACE_HOLDER_56;
				bool PLACE_HOLDER_57;
				bool PLACE_HOLDER_58;
				bool PLACE_HOLDER_59;
				bool PLACE_HOLDER_60;
				bool PLACE_HOLDER_61;
				bool PLACE_HOLDER_62;
				bool PLACE_HOLDER_63;
				bool PLACE_HOLDER_64;
				bool PLACE_HOLDER_65;
				bool PLACE_HOLDER_66;
				bool PLACE_HOLDER_67;
				bool PLACE_HOLDER_68;
				bool PLACE_HOLDER_69;
				bool PLACE_HOLDER_70;
				bool PLACE_HOLDER_71;
				bool PLACE_HOLDER_72;
				bool PLACE_HOLDER_73;
				bool PLACE_HOLDER_74;
				bool PLACE_HOLDER_75;
				bool PLACE_HOLDER_76;
				bool PLACE_HOLDER_77;
				bool PLACE_HOLDER_78;
				bool PLACE_HOLDER_79;
				bool PLACE_HOLDER_80;
				bool PLACE_HOLDER_81;
				bool PLACE_HOLDER_82;
				bool PLACE_HOLDER_83;
				bool PLACE_HOLDER_84;
				bool PLACE_HOLDER_85;
				bool PLACE_HOLDER_86;
				bool PLACE_HOLDER_87;
				bool PLACE_HOLDER_88;
				bool PLACE_HOLDER_89;
				bool PLACE_HOLDER_90;
				bool PLACE_HOLDER_91;
				bool PLACE_HOLDER_92;
				bool PLACE_HOLDER_93;
				bool PLACE_HOLDER_94;
				bool PLACE_HOLDER_95;
				bool PLACE_HOLDER_96;
				bool PLACE_HOLDER_97;
				bool PLACE_HOLDER_98;
				bool PLACE_HOLDER_99;
				bool PLACE_HOLDER_100;
				bool PLACE_HOLDER_101;
				bool PLACE_HOLDER_102;
				bool PLACE_HOLDER_103;
				bool PLACE_HOLDER_104;
				bool PLACE_HOLDER_105;
				bool PLACE_HOLDER_106;
				bool PLACE_HOLDER_107;
				bool PLACE_HOLDER_108;
				bool PLACE_HOLDER_109;
				bool PLACE_HOLDER_110;
				bool PLACE_HOLDER_111;
				bool PLACE_HOLDER_112;
				bool WORLD_1;
				bool WORLD_2;
				bool PLACE_HOLDER_113;
				bool PLACE_HOLDER_114;
				bool PLACE_HOLDER_115;
				bool PLACE_HOLDER_116;
				bool PLACE_HOLDER_117;
				bool PLACE_HOLDER_118;
				bool PLACE_HOLDER_119;
				bool PLACE_HOLDER_120;
				bool PLACE_HOLDER_121;
				bool PLACE_HOLDER_122;
				bool PLACE_HOLDER_123;
				bool PLACE_HOLDER_124;
				bool PLACE_HOLDER_125;
				bool PLACE_HOLDER_126;
				bool PLACE_HOLDER_127;
				bool PLACE_HOLDER_128;
				bool PLACE_HOLDER_129;
				bool PLACE_HOLDER_130;
				bool PLACE_HOLDER_131;
				bool PLACE_HOLDER_132;
				bool PLACE_HOLDER_133;
				bool PLACE_HOLDER_134;
				bool PLACE_HOLDER_135;
				bool PLACE_HOLDER_136;
				bool PLACE_HOLDER_137;
				bool PLACE_HOLDER_138;
				bool PLACE_HOLDER_139;
				bool PLACE_HOLDER_140;
				bool PLACE_HOLDER_141;
				bool PLACE_HOLDER_142;
				bool PLACE_HOLDER_143;
				bool PLACE_HOLDER_144;
				bool PLACE_HOLDER_145;
				bool PLACE_HOLDER_146;
				bool PLACE_HOLDER_147;
				bool PLACE_HOLDER_148;
				bool PLACE_HOLDER_149;
				bool PLACE_HOLDER_150;
				bool PLACE_HOLDER_151;
				bool PLACE_HOLDER_152;
				bool PLACE_HOLDER_153;
				bool PLACE_HOLDER_154;
				bool PLACE_HOLDER_155;
				bool PLACE_HOLDER_156;
				bool PLACE_HOLDER_157;
				bool PLACE_HOLDER_158;
				bool PLACE_HOLDER_159;
				bool PLACE_HOLDER_160;
				bool PLACE_HOLDER_161;
				bool PLACE_HOLDER_162;
				bool PLACE_HOLDER_163;
				bool PLACE_HOLDER_164;
				bool PLACE_HOLDER_165;
				bool PLACE_HOLDER_166;
				bool PLACE_HOLDER_167;
				bool PLACE_HOLDER_168;
				bool PLACE_HOLDER_169;
				bool PLACE_HOLDER_170;
				bool PLACE_HOLDER_171;
				bool PLACE_HOLDER_172;
				bool PLACE_HOLDER_173;
				bool PLACE_HOLDER_174;
				bool PLACE_HOLDER_175;
				bool PLACE_HOLDER_176;
				bool PLACE_HOLDER_177;
				bool PLACE_HOLDER_178;
				bool PLACE_HOLDER_179;
				bool PLACE_HOLDER_180;
				bool PLACE_HOLDER_181;
				bool PLACE_HOLDER_182;
				bool PLACE_HOLDER_183;
				bool PLACE_HOLDER_184;
				bool PLACE_HOLDER_185;
				bool PLACE_HOLDER_186;
				bool PLACE_HOLDER_187;
				bool PLACE_HOLDER_188;
				bool PLACE_HOLDER_189;
				bool PLACE_HOLDER_190;
				bool PLACE_HOLDER_191;
				bool PLACE_HOLDER_192;
				bool PLACE_HOLDER_193;
				bool PLACE_HOLDER_194;
				bool PLACE_HOLDER_195;
				bool PLACE_HOLDER_196;
				bool PLACE_HOLDER_197;
				bool PLACE_HOLDER_198;
				bool PLACE_HOLDER_199;
				bool PLACE_HOLDER_200;
				bool PLACE_HOLDER_201;
				bool PLACE_HOLDER_202;
				bool PLACE_HOLDER_203;
				bool PLACE_HOLDER_204;
				bool PLACE_HOLDER_205;
				bool ESCAPE;
				bool ENTER;
				bool TAB;
				bool BACKSPACE;
				bool INSERT;
				bool DELETE;
				bool RIGHT;
				bool LEFT;
				bool DOWN;
				bool UP;
				bool PAGE_UP;
				bool PAGE_DOWN;
				bool HOME;
				bool END;
				bool PLACE_HOLDER_206;
				bool PLACE_HOLDER_207;
				bool PLACE_HOLDER_208;
				bool PLACE_HOLDER_209;
				bool PLACE_HOLDER_210;
				bool PLACE_HOLDER_211;
				bool PLACE_HOLDER_212;
				bool PLACE_HOLDER_213;
				bool PLACE_HOLDER_214;
				bool PLACE_HOLDER_215;
				bool CAPS_LOCK;
				bool SCROLL_LOCK;
				bool NUM_LOCK;
				bool PRINT_SCREEN;
				bool PAUSE;
				bool PLACE_HOLDER_216;
				bool PLACE_HOLDER_217;
				bool PLACE_HOLDER_218;
				bool PLACE_HOLDER_219;
				bool PLACE_HOLDER_220;
				bool F1;
				bool F2;
				bool F3;
				bool F4;
				bool F5;
				bool F6;
				bool F7;
				bool F8;
				bool F9;
				bool F10;
				bool F11;
				bool F12;
				bool F13;
				bool F14;
				bool F15;
				bool F16;
				bool F17;
				bool F18;
				bool F19;
				bool F20;
				bool F21;
				bool F22;
				bool F23;
				bool F24;
				bool F25;
				bool PLACE_HOLDER_221;
				bool PLACE_HOLDER_222;
				bool PLACE_HOLDER_223;
				bool PLACE_HOLDER_224;
				bool PLACE_HOLDER_225;
				bool KP_0;
				bool KP_1;
				bool KP_2;
				bool KP_3;
				bool KP_4;
				bool KP_5;
				bool KP_6;
				bool KP_7;
				bool KP_8;
				bool KP_9;
				bool KP_DECIMAL;
				bool KP_DIVIDE;
				bool KP_MULTIPLY;
				bool KP_SUBTRACT;
				bool KP_ADD;
				bool KP_ENTER;
				bool KP_EQUAL;
				bool PLACE_HOLDER_226;
				bool PLACE_HOLDER_227;
				bool PLACE_HOLDER_228;
				bool LEFT_SHIFT;
				bool LEFT_CONTROL;
				bool LEFT_ALT;
				bool LEFT_SUPER;
				bool RIGHT_SHIFT;
				bool RIGHT_CONTROL;
				bool RIGHT_ALT;
				bool RIGHT_SUPER;
				bool MENU;
				bool UNKNOWN;
			} down;
			bool* bool_ptr_down;
		
			size_t num_keys;

			void reset_pressed();
			void reset_released();
			void reset_down();

			s_key();
		};
		struct s_mouse_button
		{
			struct
			{
				bool LEFT;
				bool RIGHT;
				bool MIDDLE;
				bool BTN_4;
				bool BTN_5;
				bool BTN_6;
				bool BTN_7;
				bool BTN_8;
			} pressed;
			bool* bool_ptr_pressed;
		
			struct
			{
				bool LEFT;
				bool RIGHT;
				bool MIDDLE;
				bool BTN_4;
				bool BTN_5;
				bool BTN_6;
				bool BTN_7;
				bool BTN_8;
			} released;
			bool* bool_ptr_released;
		
			struct
			{
				bool LEFT;
				bool RIGHT;
				bool MIDDLE;
				bool BTN_4;
				bool BTN_5;
				bool BTN_6;
				bool BTN_7;
				bool BTN_8;
			} down;
			bool* bool_ptr_down;
		
			size_t num_keys;

			void reset_pressed();
			void reset_released();
			void reset_down();

			s_mouse_button();
		};
		struct s_joystick
		{
			struct
			{
				bool POS_1;
				bool POS_2;
				bool POS_3;
				bool POS_4;
				bool POS_5;
				bool POS_6;
				bool POS_7;
				bool POS_8;
				bool POS_9;
				bool POS_10;
				bool POS_11;
				bool POS_12;
				bool POS_13;
				bool POS_14;
				bool POS_15;
				bool POS_16;
			} pressed;
			bool* bool_ptr_pressed;
		
			struct
			{
				bool POS_1;
				bool POS_2;
				bool POS_3;
				bool POS_4;
				bool POS_5;
				bool POS_6;
				bool POS_7;
				bool POS_8;
				bool POS_9;
				bool POS_10;
				bool POS_11;
				bool POS_12;
				bool POS_13;
				bool POS_14;
				bool POS_15;
				bool POS_16;
			} released;
			bool* bool_ptr_released;
		
			struct
			{
				bool POS_1;
				bool POS_2;
				bool POS_3;
				bool POS_4;
				bool POS_5;
				bool POS_6;
				bool POS_7;
				bool POS_8;
				bool POS_9;
				bool POS_10;
				bool POS_11;
				bool POS_12;
				bool POS_13;
				bool POS_14;
				bool POS_15;
				bool POS_16;
			} down;
			bool* bool_ptr_down;
		
			size_t num_keys;

			void reset_pressed();
			void reset_released();
			void reset_down();

			s_joystick();
		};
		struct s_game_pad_button
		{
			struct
			{
				bool A;
				bool B;
				bool X;
				bool Y;
				bool LEFT_BUMPER;
				bool RIGHT_BUMPER;
				bool BACK;
				bool START;
				bool GUIDE;
				bool LEFT_THUMB;
				bool RIGHT_THUMB;
				bool DPAD_UP;
				bool DPAD_RIGHT;
				bool DPAD_DOWN;
				bool DPAD_LEFT;
			} pressed;
			bool* bool_ptr_pressed;
		
			struct
			{
				bool A;
				bool B;
				bool X;
				bool Y;
				bool LEFT_BUMPER;
				bool RIGHT_BUMPER;
				bool BACK;
				bool START;
				bool GUIDE;
				bool LEFT_THUMB;
				bool RIGHT_THUMB;
				bool DPAD_UP;
				bool DPAD_RIGHT;
				bool DPAD_DOWN;
				bool DPAD_LEFT;
			} released;
			bool* bool_ptr_released;
		
			struct
			{
				bool A;
				bool B;
				bool X;
				bool Y;
				bool LEFT_BUMPER;
				bool RIGHT_BUMPER;
				bool BACK;
				bool START;
				bool GUIDE;
				bool LEFT_THUMB;
				bool RIGHT_THUMB;
				bool DPAD_UP;
				bool DPAD_RIGHT;
				bool DPAD_DOWN;
				bool DPAD_LEFT;
			} down;
			bool* bool_ptr_down;
		
			size_t num_keys;

			void reset_pressed();
			void reset_released();
			void reset_down();

			s_game_pad_button();
		};
		struct s_game_pad_axix
		{
			struct
			{
				bool LEFT_X;
				bool LEFT_Y;
				bool RIGHT_X;
				bool RIGHT_Y;
				bool LEFT_TRIGGER;
				bool RIGHT_TRIGGER;
			} pressed;
			bool* bool_ptr_pressed;
		
			struct
			{
				bool LEFT_X;
				bool LEFT_Y;
				bool RIGHT_X;
				bool RIGHT_Y;
				bool LEFT_TRIGGER;
				bool RIGHT_TRIGGER;
			} released;
			bool* bool_ptr_released;
		
			struct
		{
				bool LEFT_X;
				bool LEFT_Y;
				bool RIGHT_X;
				bool RIGHT_Y;
				bool LEFT_TRIGGER;
				bool RIGHT_TRIGGER;
			} down;
			bool* bool_ptr_down;
		
			size_t num_keys;

			void reset_pressed();
			void reset_released();
			void reset_down();

			s_game_pad_axix();
		};
		extern s_key key;
		extern s_mouse_button mouse_button;
		extern s_joystick joystick;
		extern s_game_pad_button game_pad_button;
		extern s_game_pad_axix game_pad_axix;

		struct s_mouse_pos
		{
			double x;
			double y;
			double delta_x;
			double delta_y;

			double* double_ptr;

			size_t num_coords;

			void reset_abs_pos();
			void reset_delta_pos();

			s_mouse_pos();
		};

		extern s_mouse_pos mouse_pos;

		void debug_print_keys_pressed();
		void debug_print_keys_released();
		void debug_print_keys_down();
	}
}
