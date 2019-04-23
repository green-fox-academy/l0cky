//
// Created by l0cky on 2019-04-23.
//

#ifndef GREENFOX_SPONSOR_H
#define GREENFOX_SPONSOR_H


#include "person.h"

class Sponsor : public Person {

public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    Sponsor();

    ~Sponsor();

    void introduce() override ;

    void getGoal() override ;

    void hire();

private:
    std::string _company;
    int _hiredStudents;

};


#endif //GREENFOX_SPONSOR_H
