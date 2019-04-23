//
// Created by l0cky on 2019-04-23.
//

#ifndef GREENFOX_STUDENT_H
#define GREENFOX_STUDENT_H


#include <string>
#include "person.h"

class Student : public Person {

public:

    Student(const std::string &name, int age, Gender gender,
            const std::string &previousOrganization);

    Student();

    ~Student();

    const std::string &getPreviousOrganization() const;

    int getSkippedDays() const;

    void introduce() override;

    void getGoal() override;

    void skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;

};


#endif //GREENFOX_STUDENT_H
