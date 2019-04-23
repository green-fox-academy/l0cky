//
// Created by l0cky on 2019-04-23.
//

#include <iostream>
#include "person.h"

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{}

Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = FEMALE;
}

Person::~Person()
{}

const std::string &Person::getName() const
{
    return _name;
}

int Person::getAge() const
{
    return _age;
}

std::string Person::getGenderAsString() const
{
    switch (_gender) {
        case FEMALE:
            return "female";
        case MALE:
            return "male";
    }
}


void Person::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " old " << getGenderAsString() << "." << std::endl;
}

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}