cmake_minimum_required(VERSION 3.14)
project(countLines C)

set(CMAKE_C_STANDARD 11)

add_executable(countLines main.c file_functions.c file_functions.h)