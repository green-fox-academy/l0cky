//
// Created by l0cky on 2019-04-23.
//

#include "Tree.h"

Tree::Tree(const std::string &color) : Plant(color)
{
    setWateringUnder(10);
    setAbsorbPercent(0.4);
    setPlantType(Plants::TREE);
}

Tree::~Tree() = default;
