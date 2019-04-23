//
// Created by l0cky on 2019-04-23.
//

#include <iostream>
#include "sponsor.h"

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company) : Person(name, age,
                                                                                                       gender),
                                                                                                _company(company)
{
    _hiredStudents = 0;
}

Sponsor::Sponsor()
{
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::~Sponsor()
{

}

void Sponsor::introduce()
{
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old "
            << getGenderAsString() << " who represents " << _company
            << " and " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::hire()
{
    _hiredStudents += 1;
}
