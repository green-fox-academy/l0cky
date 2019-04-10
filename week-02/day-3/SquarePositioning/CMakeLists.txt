cmake_minimum_required(VERSION 3.13)
project(SquarePositioning)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(SDL2_GFX "/Users/l0cky/GFA/greenfox/c-cpp/SDL2_macOS/SDL2_plugins/gfx")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})

include_directories(${SDL2_GFX}/inc)
file(GLOB gfx_inc "${SDL2_GFX}/inc/*.h")
file(GLOB gfx_src "${SDL2_GFX}/src/*.c")

add_executable(center_box_function main.cpp ${gfx_inc} ${gfx_src})

target_link_libraries(center_box_function ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES})