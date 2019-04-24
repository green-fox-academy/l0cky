cmake_minimum_required(VERSION 3.14)
project(Instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments main.cpp instrument.h stringedInstrument.h stringedInstrument.cpp stringedInstrument.h electricGuitar.cpp electricGuitar.h bassGuitar.cpp bassGuitar.h violin.cpp violin.h)