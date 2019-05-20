cmake_minimum_required(VERSION 3.14)
project(test_ceedling C)

set(CMAKE_C_STANDARD 11)

add_executable(test_ceedling main.c src/my_functions.c src/my_functions.h test/test_my_functions.c)