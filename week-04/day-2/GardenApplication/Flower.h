//
// Created by l0cky on 2019-04-23.
//

#ifndef GARDENAPPLICATION_FLOWER_H
#define GARDENAPPLICATION_FLOWER_H


#include "Plant.h"

class Flower : public Plant {

public:
    explicit Flower(const std::string &color);

    ~Flower() override;

};


#endif //GARDENAPPLICATION_FLOWER_H
