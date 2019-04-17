#include <iostream>
#include "Animal.h"

int main()
{
    Animal lion;
    Animal duck(70, 50);

    std::cout << "Lion: " << std::endl;
    std::cout << "Hunger: " << lion.getHunger() << std::endl;
    std::cout << "Thirst: " << lion.getThirst() << std::endl;

    lion.play();
    lion.play();
    lion.drink();
    lion.eat();
    lion.eat();
    lion.eat(10);
    std::cout << std::endl;
    std::cout << "Lion: " << std::endl;
    std::cout << "Hunger: " << lion.getHunger() << std::endl;
    std::cout << "Thirst: " << lion.getThirst() << std::endl;
    lion.setHunger(99);
    lion.setThirst(39);
    std::cout << std::endl;
    std::cout << "Lion: " << std::endl;
    std::cout << "Hunger: " << lion.getHunger() << std::endl;
    std::cout << "Thirst: " << lion.getThirst() << std::endl;
    std::cout << std::endl;
    duck.drink(10);
    std::cout << "Duck: " << std::endl;
    std::cout << "Hunger: " << duck.getHunger() << std::endl;
    std::cout << "Thirst: " << duck.getThirst() << std::endl;

    return 0;
}