//
// Created by l0cky on 2019-04-24.
//

#include "bassGuitar.h"

BassGuitar::BassGuitar(int numberOfStrings)
{
    _name = "Bass Guitar";
    _numberOfStrings = numberOfStrings;
    _sound = "Duum-duum-duum";
}

BassGuitar::BassGuitar()
{
    _name = "Bass Guitar";
    _numberOfStrings = 4;
    _sound = "Duum-duum-duum";
}

BassGuitar::~BassGuitar()
= default;

std::string BassGuitar::sound()
{
    return _sound;
}
