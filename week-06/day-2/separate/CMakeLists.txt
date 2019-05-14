cmake_minimum_required(VERSION 3.14)
project(separate C)

set(CMAKE_C_STANDARD 11)

add_executable(separate main.c circle.h circle.c)