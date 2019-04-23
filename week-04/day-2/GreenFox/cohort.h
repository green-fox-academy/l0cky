//
// Created by l0cky on 2019-04-23.
//

#ifndef GREENFOX_COHORT_H
#define GREENFOX_COHORT_H


#include <string>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort {

public:
    Cohort(const std::string &name);

    ~Cohort();

    void addStudent(Student *student);

    void addMentor(Mentor *mentor);

    void info();

private:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;

};


#endif //GREENFOX_COHORT_H
