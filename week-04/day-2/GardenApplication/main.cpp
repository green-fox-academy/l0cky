#include <iostream>
#include <vector>
#include "Flower.h"
#include "Tree.h"
#include "Garden.h"

int main()
{

    Garden garden;

    Flower yellowFlower("yellow");
    Flower blueFlower("blue");

    garden.addPlant(&yellowFlower);
    garden.addPlant(&blueFlower);

    Tree purpleTree("purple");
    Tree orangeTree("orange");

    garden.addPlant(&purpleTree);
    garden.addPlant(&orangeTree);

    garden.showGarden();
    garden.waterGarden(40);
    garden.waterGarden(70);

    return 0;
}