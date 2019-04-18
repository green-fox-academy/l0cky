//
// Created by l0cky on 2019-04-18.
//

#include "car.h"

Car::Car(std::string name, int gasAmount, int capacity) : _name(name), _gasAmount(gasAmount), _capacity(capacity)
{}

std::string Car::getCarName()
{
    return _name;
}

bool Car::isFull()
{
    if (_gasAmount == _capacity) {
        return true;
    } else {
        return false;
    }
}

void Car::fill()
{
    _gasAmount += 1;
}

std::string Car::toString()
{
    return _name + ":\n" + "Capacity: " + std::to_string(_capacity) + "\n" + "Gas amount: " +
           std::to_string(_gasAmount) + "\n";
}
