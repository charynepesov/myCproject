cmake_minimum_required(VERSION 3.21)
project(myCproject C)

set(CMAKE_C_STANDARD 23)

add_executable(myCproject main.c MyFunctions/functions.h)
