cmake_minimum_required(VERSION 3.28)
project(liz_pr)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Dependencies/glfw-3.4)

include_directories(Dependencies/glad/include)
add_library(glad STATIC Dependencies/glad/src/glad.c)

add_executable(liz_pr main/main.cpp)

target_link_libraries(liz_pr glfw glad)
