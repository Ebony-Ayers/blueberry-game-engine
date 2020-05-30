add_library(BlueBerryGameEngine STATIC src/BlueBerry.cpp include/BlueBerry.h)

#GLFW
#https://www.glfw.org/docs/3.3/build_guide.html#build_link_cmake_source
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(external/glfw)
target_link_libraries(BlueBerryGameEngine glfw)
#find_package(OpenGL REQUIRED)
#target_link_libraries(${PROJECT_NAME} OpenGL::GL)
#https://stackoverflow.com/questions/49265668/vulkan-glfw-cmake-issues-with-linking-under-linux-enviroment
find_package(Vulkan REQUIRED)
target_link_libraries(BlueBerryGameEngine ${Vulkan_LIBRARIES})
target_include_directories(BlueBerryGameEngine PUBLIC ${Vulkan_INCLUDE_DIR})

#TODO
#pch
#required features
#stb
#vulkan
#build modes
