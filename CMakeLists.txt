cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(project_name)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add executables
add_executable(main main.cpp)
