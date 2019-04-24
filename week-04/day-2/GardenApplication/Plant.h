//
// Created by l0cky on 2019-04-23.
//

#ifndef GARDENAPPLICATION_PLANT_H
#define GARDENAPPLICATION_PLANT_H


#include <string>

enum Plants {
    FLOWER,
    TREE,
    NOTSET
};

class Plant {

public:
    explicit Plant(std::string color);

    virtual ~Plant();

    const std::string &getColor() const;

    int getWateringUnder() const;

    float getAbsorbPercent() const;

    float getWatered() const;

    const std::string getPlantTypeAsString() const;

    void setWateringUnder(int wateringUnder);

    void setAbsorbPercent(float absorbPercent);

    void setWatered(float watered);

    void setPlantType(Plants plantType);

    void waterPlant(float waterVolume);


private:
    std::string _color;
    int _wateringUnder;
    float _absorbPercent;
    float _watered;
    Plants _plantType;

};


#endif //GARDENAPPLICATION_PLANT_H
