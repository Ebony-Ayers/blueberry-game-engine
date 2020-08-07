cmake_minimum_required(VERSION 3.15)

#-------------------------------------------------------------------------------------------------------
#												c++ standard
#-------------------------------------------------------------------------------------------------------

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#-------------------------------------------------------------------------------------------------------
#												main code
#-------------------------------------------------------------------------------------------------------

set(BBsources
	src/BlueBerry.cpp
	src/windows.cpp
	src/input.cpp
	src/runtime.cpp
	src/log.cpp

	src/pch.h
)

set(BBheaders
	include/BlueBerry.h
	include/input.h
	include/windows.h
	include/runtime.h
	include/log.h

	include/config.h
)

add_library(BlueBerryGameEngine STATIC ${BBsources} ${BBheaders})

target_include_directories(BlueBerryGameEngine PRIVATE src/)
target_include_directories(BlueBerryGameEngine PRIVATE include/)

#-------------------------------------------------------------------------------------------------------
#												requirements
#-------------------------------------------------------------------------------------------------------

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
#												compiler options
#-------------------------------------------------------------------------------------------------------

#tell the engine the cmake is handeling flags
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_CMAKE)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_DEBUG=true)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_RELEASE=false)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_PROFILING=true)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Release")
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_DEBUG=false)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_RELEASE=true)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_PROFILING=false)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Relwithdebinfo")
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_DEBUG=true)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_RELEASE=true)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_PROFILING=true)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_DEBUG=false)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_RELEASE=true)
target_compile_definitions(BlueBerryGameEngine PUBLIC BB_PROFILING=false)
endif()

#-------------------------------------------------------------------------------------------------------
#												compiler warnings
#-------------------------------------------------------------------------------------------------------

set(MSVC_WARNINGS
	/W4 # Baseline reasonable warnings
	/w14242 # 'identifier': conversion from 'type1' to 'type1', possible loss of data
	/w14254 # 'operator': conversion from 'type1:field_bits' to 'type2:field_bits', possible loss of data
	/w14263 # 'function': member function does not override any base class virtual member function
	/w14265 # 'classname': class has virtual functions, but destructor is not virtual instances of this class may not
			# be destructed correctly
	/w14287 # 'operator': unsigned/negative constant mismatch
	/we4289 # nonstandard extension used: 'variable': loop control variable declared in the for-loop is used outside
			# the for-loop scope
	/w14296 # 'operator': expression is always 'boolean_value'
	/w14311 # 'variable': pointer truncation from 'type1' to 'type2'
	/w14545 # expression before comma evaluates to a function which is missing an argument list
	/w14546 # function call before comma missing argument list
	/w14547 # 'operator': operator before comma has no effect; expected operator with side-effect
	/w14549 # 'operator': operator before comma has no effect; did you intend 'operator'?
	/w14555 # expression has no effect; expected expression with side- effect
	/w14619 # pragma warning: there is no warning number 'number'
	/w14640 # Enable warning on thread un-safe static member initialization
	/w14826 # Conversion from 'type1' to 'type_2' is sign-extended. This may cause unexpected runtime behavior.
	/w14905 # wide string literal cast to 'LPSTR'
	/w14906 # string literal cast to 'LPWSTR'
	/w14928 # illegal copy-initialization; more than one user-defined conversion has been implicitly applied
	/permissive- # standards conformance mode for MSVC compiler.
)

set(CLANG_WARNINGS
	-Wall
	-Wextra # reasonable and standard
	-Wshadow # warn the user if a variable declaration shadows one from a parent context
	-Wnon-virtual-dtor # warn the user if a class with virtual functions has a non-virtual destructor. This helps
						# catch hard to track down memory errors
	-Wold-style-cast # warn for c-style casts
	-Wcast-align # warn for potential performance problem casts
	-Wunused # warn on anything being unused
	-Woverloaded-virtual # warn if you overload (not override) a virtual function
	-Wpedantic # warn if non-standard C++ is used
	-Wconversion # warn on type conversions that may lose data
	-Wsign-conversion # warn on sign conversions
	-Wnull-dereference # warn if a null dereference is detected
	-Wdouble-promotion # warn if float is implicit promoted to double
	-Wformat=2 # warn on security issues around functions that format output (ie printf)
)

set(GCC_WARNINGS
	${CLANG_WARNINGS}
	-Wmisleading-indentation # warn if indentation implies blocks where blocks do not exist
	-Wduplicated-cond # warn if if / else chain has duplicated conditions
	-Wduplicated-branches # warn if if / else branches have duplicated code
	-Wlogical-op # warn about logical operations being used where bitwise were probably wanted
	-Wuseless-cast # warn if you perform a cast to the same type
)

if(MSVC)
	set(PROJECT_WARNINGS ${MSVC_WARNINGS})
elseif(CMAKE_CXX_COMPILER_ID MATCHES ".*Clang")
	set(PROJECT_WARNINGS ${CLANG_WARNINGS})
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	set(PROJECT_WARNINGS ${GCC_WARNINGS})
else()
	message(AUTHOR_WARNING "No compiler warnings set for '${CMAKE_CXX_COMPILER_ID}' compiler.")
endif()

target_compile_options(BlueBerryGameEngine INTERFACE ${PROJECT_WARNINGS})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


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
	PRIVATE src/pch.h
)

#-------------------------------------------------------------------------------------------------------
#												ccache
#-------------------------------------------------------------------------------------------------------

find_program(CCACHE ccache)
if(CCACHE)
	message("using ccache")
	set(CMAKE_CXX_COMPILER_LAUNCHER ${CCACHE})
else()
	message("ccache not found cannot use")
endif()

#-------------------------------------------------------------------------------------------------------
#												ipo
#-------------------------------------------------------------------------------------------------------

option(ENABLE_IPO "Enable ipo" ON)

if(ENABLE_IPO)
	include(CheckIPOSupported)
	check_ipo_supported(RESULT result OUTPUT output)
	if(result)
		message("using ipo")
		set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)
	else()
		message(SEND_ERROR "IPO is not supported: ${output}")
	endif()
endif()

#-------------------------------------------------------------------------------------------------------
#												static analysis
#-------------------------------------------------------------------------------------------------------

option(ENABLE_CPPCHECK "Enable static analysis with cppcheck" OFF)
option(ENABLE_CLANG_TIDY "Enable static analysis with clang-tidy" OFF)

if(ENABLE_CPPCHECK)
	find_program(CPPCHECK cppcheck)
	if(CPPCHECK)
		set(CMAKE_CXX_CPPCHECK ${CPPCHECK} --suppress=missingInclude --enable=all --inconclusive -i ${CMAKE_SOURCE_DIR}/imgui/lib)
	else()
		message(SEND_ERROR "cppcheck requested but executable not found")
	endif()
endif()

if(ENABLE_CLANG_TIDY)
	find_program(CLANGTIDY clang-tidy)
		if(CLANGTIDY)
			set(CMAKE_CXX_CLANG_TIDY ${CLANGTIDY})
		else()
			message(SEND_ERROR "clang-tidy requested but executable not found")
	endif()
endif()