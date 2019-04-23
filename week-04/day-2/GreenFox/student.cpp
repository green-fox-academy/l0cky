//
// Created by l0cky on 2019-04-23.
//

#include <iostream>
#include "student.h"

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) : Person(
        name, age, gender),
                                                                                                             _previousOrganization(
                                                                                                                     previousOrganization)
{
    _skippedDays = 0;
}

Student::Student() : Person()
{
    _skippedDays = 0;
}

Student::~Student()
{}

const std::string &Student::getPreviousOrganization() const
{
    return _previousOrganization;
}

int Student::getSkippedDays() const
{
    return _skippedDays;
}

void Student::introduce()
{
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old " << getGenderAsString()
              << " from " << _previousOrganization << " who skipped "
              << _skippedDays << " days from the course already." << std::endl;
}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberOfDays)
{
    _skippedDays += numberOfDays;
}


