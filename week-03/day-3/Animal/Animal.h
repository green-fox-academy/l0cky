//
// Created by l0cky on 2019-04-17.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal {
public:
    Animal(int hunger, int thirst);

    Animal();

    int getHunger() const;

    void setHunger(int hunger);

    int getThirst() const;

    void setThirst(int thirst);

    void eat(int eat = 1);

    void drink(int drink = 1);

    void play(int play = 1);

private:
    int _hunger;
    int _thirst;
};


#endif //ANIMAL_ANIMAL_H
