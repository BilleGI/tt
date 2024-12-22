cmake_minimum_required(VERSION 3.15)

find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(deal main.cpp)

target_link_libraries(deal glfw OpenGL::GL GLEW::GLEW)
