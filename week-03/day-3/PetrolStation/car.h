//
// Created by l0cky on 2019-04-18.
//

#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H


#include <string>

class Car {

public:
    Car(std::string _name, int gasAmount = 1, int capacity = 9);

    std::string getCarName();

    bool isFull();

    void fill();

    std::string toString();

private:
    std::string _name;
    int _gasAmount;
    int _capacity;

};


#endif //PETROLSTATION_CAR_H
