//
// Created by l0cky on 2019-04-23.
//

#ifndef GREENFOX_MENTOR_H
#define GREENFOX_MENTOR_H

#include "person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

    ~Mentor();

    std::string getLevelAsString() const;

    void introduce() override;

    void getGoal() override;


private:
    Level _level;

};


#endif //GREENFOX_MENTOR_H
