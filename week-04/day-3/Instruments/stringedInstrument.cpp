//
// Created by l0cky on 2019-04-24.
//

#include <iostream>
#include "stringedInstrument.h"

StringedInstrument::StringedInstrument()
{
    _numberOfStrings = 0;
}

StringedInstrument::~StringedInstrument()
= default;

void StringedInstrument::play()
{
    std::cout << getNameAsString() << ", a " << getNumberOfStringsAsString()
              << "-stringed instrument that goes " << sound() << std::endl;
}

std::string StringedInstrument::getNameAsString()
{
    return _name;
}

std::string StringedInstrument::getNumberOfStringsAsString()
{
    return std::to_string(_numberOfStrings);
}


