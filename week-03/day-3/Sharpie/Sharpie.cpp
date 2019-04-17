//
// Created by l0cky on 2019-04-17.
//

#include "Sharpie.h"


Sharpie::Sharpie(const std::string &color, float width) : _color(color), _width(width), _inkAmount(100)
{}


const std::string &Sharpie::getColor() const
{
    return _color;
}

float Sharpie::getWidth() const
{
    return _width;
}

float Sharpie::getInkAmount() const
{
    return _inkAmount;
}

void Sharpie::use(int use)
{
    Sharpie::_inkAmount -= use;
}