#include <utility>

//
// Created by l0cky on 2019-04-23.
//

#include "Plant.h"

Plant::Plant(std::string color) : _color(std::move(color))
{
    _wateringUnder = 0;
    _absorbPercent = 0;
    _watered = 0;
    _plantType = Plants::NOTSET;
}

Plant::~Plant()
= default;

const std::string &Plant::getColor() const
{
    return _color;
}

int Plant::getWateringUnder() const
{
    return _wateringUnder;
}

float Plant::getAbsorbPercent() const
{
    return _absorbPercent;
}

float Plant::getWatered() const
{
    return _watered;
}

const std::string Plant::getPlantTypeAsString() const
{
    switch (_plantType) {
        case FLOWER:
            return "Flower";
        case TREE:
            return "Tree";
        case NOTSET:
            return "Plant type not set";
    }
}

void Plant::setWateringUnder(int wateringUnder)
{
    _wateringUnder = wateringUnder;
}

void Plant::setAbsorbPercent(float absorbPercent)
{
    _absorbPercent = absorbPercent;
}

void Plant::setWatered(float watered)
{
    _watered = watered;
}

void Plant::setPlantType(Plants plantType)
{
    _plantType = plantType;
}

void Plant::waterPlant(float waterVolume)
{
    setWatered(getWatered() + waterVolume * getAbsorbPercent());

}

