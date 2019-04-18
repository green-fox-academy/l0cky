//
// Created by l0cky on 2019-04-18.
//

#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include <string>
#include "car.h"


class Station {

public:
    Station(std::string name, int gasAmount = 20);

    void fill(Car &car);

    std::string toString();

private:

    bool isEmpty();

    std::string fillingString();

    std::string emptyString();

    std::string _name;
    int _gasAmount;

};


#endif //PETROLSTATION_STATION_H
