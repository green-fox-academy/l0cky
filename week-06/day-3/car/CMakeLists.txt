cmake_minimum_required(VERSION 3.14)
project(car C)

set(CMAKE_C_STANDARD 11)

add_executable(car main.c car_functions.c car_functions.h)