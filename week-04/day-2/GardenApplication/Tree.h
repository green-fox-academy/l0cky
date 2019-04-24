//
// Created by l0cky on 2019-04-23.
//

#ifndef GARDENAPPLICATION_TREE_H
#define GARDENAPPLICATION_TREE_H


#include "Plant.h"

class Tree : public Plant {

public:
    explicit Tree(const std::string &color);

    ~Tree() override;

};


#endif //GARDENAPPLICATION_TREE_H
