//
// Created by l0cky on 2019-04-23.
//

#include "Flower.h"

Flower::Flower(const std::string &color) : Plant(color)
{
    setWateringUnder(5);
    setAbsorbPercent(0.75);
    setPlantType(Plants::FLOWER);
}

Flower::~Flower() = default;
