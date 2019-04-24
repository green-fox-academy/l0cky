//
// Created by l0cky on 2019-04-24.
//

#include "violin.h"

Violin::Violin(int numberOfStrings)
{
    _name = "Violin";
    _numberOfStrings = numberOfStrings;
    _sound = "Screech";
}

Violin::Violin()
{
    _name = "Violin";
    _numberOfStrings = 4;
    _sound = "Screech";
}

Violin::~Violin()
= default;

std::string Violin::sound()
{
    return _sound;
}
