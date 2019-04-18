//
// Created by l0cky on 2019-04-18.
//

#include <iostream>
#include "station.h"

Station::Station(std::string name, int gasAmount) : _name(name), _gasAmount(gasAmount)
{}

void Station::fill(Car &car)
{
    std::cout << "Filling: " << car.getCarName() << std::endl;
    while (true) {
        if (!isEmpty()) {
            if (car.isFull()) {
                std::cout << car.getCarName() << " is full.\n" << toString() << std::endl;
                break;
            } else {
                car.fill();
                _gasAmount -= 1;
                std::cout << fillingString() << std::endl;
            }
        } else {
            std::cout << emptyString() << std::endl;
            break;
        }
    }
}

std::string Station::toString()
{
    return _name + "'s station gas amount is " + std::to_string(_gasAmount);
}

bool Station::isEmpty()
{
    return _gasAmount == 0;
}

std::string Station::fillingString()
{
    return "Filling car!";
}

std::string Station::emptyString()
{
    return "The " + _name + "'s gas station is empty, find another one.";
}






