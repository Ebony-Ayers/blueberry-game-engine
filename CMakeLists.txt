#-------------------------------------------------------------------------------------------------------
#												main code
#-------------------------------------------------------------------------------------------------------

set(BBsources
	src/BlueBerry.cpp
	src/windows.cpp
	src/input.cpp
	src/runtime.cpp

	src/pch.h
)

set(BBheaders
	include/BlueBerry.h
	include/input.h
	include/windows.h
	include/runtime.h
)

add_library(BlueBerryGameEngine STATIC ${BBsources} ${BBheaders})

target_include_directories(BlueBerryGameEngine PRIVATE src/)
target_include_directories(BlueBerryGameEngine PRIVATE include/)

#-------------------------------------------------------------------------------------------------------
#												requirements
#-------------------------------------------------------------------------------------------------------

set(CMAKE_CXX_STANDARD 17)

target_compile_features(BlueBerryGameEngine PRIVATE cxx_alignas)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_alignof)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_auto_type)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_constexpr)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_func_identifier)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_long_long_type)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_nullptr)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_sizeof_member)
target_compile_features(BlueBerryGameEngine PRIVATE cxx_strong_enums)

#-------------------------------------------------------------------------------------------------------
#												libraries
#-------------------------------------------------------------------------------------------------------

#vulkan
target_include_directories(BlueBerryGameEngine PUBLIC external/vulkan/vulkansdk-linux-x86_64-1.2.135.0/1.2.135.0/x86_64/include)
target_include_directories(BlueBerryGameEngine PUBLIC external/vulkan/vulkansdk-linux-x86_64-1.2.135.0/1.2.135.0/x86_64/lib)

#GLFW
#https://www.glfw.org/docs/3.3/build_guide.html#build_link_cmake_source
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(external/glfw)
target_link_libraries(BlueBerryGameEngine glfw)
#find_package(OpenGL REQUIRED)
#target_link_libraries(${PROJECT_NAME} OpenGL::GL)

#GLM
add_subdirectory(external/glm)
target_link_libraries(BlueBerryGameEngine glm)

#STB
target_include_directories(BlueBerryGameEngine PUBLIC external/stb)

#-------------------------------------------------------------------------------------------------------
#												pch
#-------------------------------------------------------------------------------------------------------

#pch
target_precompile_headers(BlueBerryGameEngine 
	PRIVATE external/vulkan/vulkansdk-linux-x86_64-1.2.135.0/1.2.135.0/x86_64/include/vulkan/vulkan.h
	PRIVATE external/glfw/include/GLFW/glfw3.h
	PRIVATE external/glm/glm/glm.hpp
	PUBLIC external/stb/stb_image.h
	PUBLIC external/stb/stb_sprintf.h
	PRIVATE src/pch.h
)

#TODO
#build modes