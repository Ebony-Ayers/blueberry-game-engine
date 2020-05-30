cmake_minimum_required(VERSION 3.17.2)

project(Sandbox VERSION 0.0.2)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(../ external/BlueBerry)
include_directories(../include)
target_link_libraries(${PROJECT_NAME} PUBLIC BlueBerryGameEngine)