#include <iostream>
#include "person.h"
#include "student.h"
#include "mentor.h"
#include "sponsor.h"
#include "cohort.h"

int main()
{
    std::vector<Person*> people;

    Person mark("Mark", 46, Gender::MALE);
    people.push_back(&mark);
    Person jane;
    people.push_back(&jane);
    Student john("John Doe", 20, Gender::MALE, "BME");
    people.push_back(&john);
    Student student;
    people.push_back(&student);
    Mentor gandhi("Gandhi", 148, Gender::MALE, Level::SENIOR);
    people.push_back(&gandhi);
    Mentor mentor;
    people.push_back(&mentor);
    Sponsor sponsor;
    people.push_back(&sponsor);
    Sponsor elon("Elon Musk", 46, Gender::MALE, "SpaceX");
    people.push_back(&elon);

    student.skipDays(3);

    for (int i = 0; i < 5; i++) {
        elon.hire();
    }

    for (int i = 0; i < 3; i++) {
        sponsor.hire();
    }

    for(Person* person : people) {
        person->introduce();
        person->getGoal();
    }

    Cohort awesome = Cohort("AWESOME");
    awesome.addStudent(&student);
    awesome.addStudent(&john);
    awesome.addMentor(&mentor);
    awesome.addMentor(&gandhi);
    awesome.info();

    return 0;
}