//
// Created by l0cky on 2019-04-23.
//

#ifndef GARDENAPPLICATION_GARDEN_H
#define GARDENAPPLICATION_GARDEN_H


#include <vector>
#include "Plant.h"

class Garden {

public:
    Garden();

    virtual ~Garden();

    void addPlant(Plant *plant);

    void showGarden();

    int needWatering();

    void waterGarden(int waterVolume);

private:
    std::vector<Plant *> _plants;

};


#endif //GARDENAPPLICATION_GARDEN_H
