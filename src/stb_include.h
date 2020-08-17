#pragma once

//from: https://www.fluentcpp.com/2019/08/30/how-to-disable-a-warning-in-cpp/

#ifdef __GNUC__
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wunused-variable"
	#pragma GCC diagnostic ignored "-Wold-style-cast"
	#pragma GCC diagnostic ignored "-Wduplicated-branches"
	#pragma GCC diagnostic ignored "-Wuseless-cast"
	#pragma GCC diagnostic ignored "-Wunused-variable"
	#pragma GCC diagnostic ignored "-Wsign-conversion"
	#pragma GCC diagnostic ignored "-Wdouble-promotion"
	#pragma GCC diagnostic ignored "-Wconversion"

	#define STB_IMAGE_IMPLEMENTATION
	#include <stb_image.h>

	#pragma GCC diagnostic pop
#else
	#ifdef __clang__
		#pragma GCC diagnostic push
		#pragma GCC diagnostic ignored "-Wunused-variable"
		#pragma GCC diagnostic ignored "-Wold-style-cast"
		#pragma GCC diagnostic ignored "-Wduplicated-branches"
		#pragma GCC diagnostic ignored "-Wuseless-cast"
		#pragma GCC diagnostic ignored "-Wunused-variable"
		#pragma GCC diagnostic ignored "-Wsign-conversion"
		#pragma GCC diagnostic ignored "-Wdouble-promotion"
		#pragma GCC diagnostic ignored "-Wconversion"

		#define STB_IMAGE_IMPLEMENTATION
		#include <stb_image.h>

		#pragma GCC diagnostic pop
	#else
		#ifdef _MSC_VER
			//MSVC warning suppression comming soon
		#else
			#define STB_IMAGE_IMPLEMENTATION
			#include <stb_image.h>
		#endif
	#endif
#endif