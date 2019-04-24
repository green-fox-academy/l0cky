//
// Created by l0cky on 2019-04-24.
//

#include "electricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings)
{
    _name = "Electric Guitar";
    _numberOfStrings = numberOfStrings;
    _sound = "Twang";
}

ElectricGuitar::ElectricGuitar()
{
    _name = "Electric Guitar";
    _numberOfStrings = 6;
    _sound = "Twang";
}

ElectricGuitar::~ElectricGuitar()
= default;

std::string ElectricGuitar::sound()
{
    return _sound;
}
