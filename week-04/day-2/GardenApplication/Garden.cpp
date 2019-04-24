//
// Created by l0cky on 2019-04-23.
//

#include <iostream>
#include "Garden.h"

Garden::Garden()
= default;

Garden::~Garden()
= default;

void Garden::addPlant(Plant *plant)
{
    _plants.push_back(plant);
}

void Garden::showGarden()
{
    for (auto &_plant : _plants) {
        std::cout << "The " << _plant->getColor() << " " << _plant->getPlantTypeAsString();
        if (_plant->getWatered() < _plant->getWateringUnder()) {
            std::cout << " needs";
        } else {
            std::cout << " doesnt need";
        }
        std::cout << " water" << std::endl;
    }
    std::cout << std::endl;
}

int Garden::needWatering()
{
    int needWateringNum = 0;
    for (auto &_plant : _plants) {
        if (_plant->getWatered() < _plant->getWateringUnder()) {
            needWateringNum++;
        }
    }
    return needWateringNum;
}

void Garden::waterGarden(int waterVolume)
{
    std::cout << "Watering with " << waterVolume << std::endl;
    float waterEachWith = (float) waterVolume / (float) needWatering();
    for (auto &_plant : _plants) {
        _plant->waterPlant(waterEachWith);
    }
    showGarden();
}
