cmake_minimum_required(VERSION 3.13)
project(fleet_of_things)

set(CMAKE_CXX_STANDARD 14)

add_executable(fleet_of_things main.cpp fleet.h thing.h thing.cpp fleet.cpp)