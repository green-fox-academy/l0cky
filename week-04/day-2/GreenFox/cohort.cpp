//
// Created by l0cky on 2019-04-23.
//

#include <iostream>
#include "cohort.h"

Cohort::Cohort(const std::string &name) : _name(name)
{}

Cohort::~Cohort()
{}

void Cohort::addStudent(Student *student)
{
    _students.push_back(student);
}

void Cohort::addMentor(Mentor *mentor)
{
    _mentors.push_back(mentor);
}

void Cohort::info()
{
    std::cout << "The " << _name << " cohort has "
            << _students.size() << " students and "
            << _mentors.size()  << " mentors." << std::endl;
}
