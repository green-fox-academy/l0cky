//
// Created by l0cky on 2019-04-17.
//

#include "Animal.h"

Animal::Animal(int hunger, int thirst) : _hunger(hunger), _thirst(thirst)
{}

Animal::Animal()
{
    Animal::_hunger = 50;
    Animal::_thirst = 50;
}

int Animal::getHunger() const
{
    return _hunger;
}

void Animal::setHunger(int hunger)
{
    _hunger = hunger;
}

int Animal::getThirst() const
{
    return _thirst;
}

void Animal::setThirst(int thirst)
{
    _thirst = thirst;
}

void Animal::eat(int eat)
{
    Animal::_hunger -= eat;
}

void Animal::drink(int drink)
{
    Animal::_thirst -= drink;
}

void Animal::play(int play)
{
    Animal::_hunger += play;
    Animal::_thirst += play;
}
