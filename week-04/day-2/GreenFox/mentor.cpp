//
// Created by l0cky on 2019-04-23.
//

#include <iostream>
#include "mentor.h"

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender), _level(level)
{}

Mentor::Mentor() : Person()
{
    _level = INTERMEDIATE;
}

Mentor::~Mentor()
{}

std::string Mentor::getLevelAsString() const
{
    switch (_level) {
        case JUNIOR:
            return "junior";
        case INTERMEDIATE:
            return "intermediate";
        case SENIOR:
            return "senior";
    }
}

void Mentor::introduce()
{
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old "
              << getGenderAsString() << " " << getLevelAsString() << " mentor." << std::endl;
}

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

