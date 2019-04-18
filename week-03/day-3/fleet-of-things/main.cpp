#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    Thing thing1("Get milk");
    Thing thing2("Remove the obstacle");
    Thing thing3("Stand up");
    Thing thing4("Eat lunch");

    thing3.complete();
    thing4.complete();

    fleet.add(thing1);
    fleet.add(thing2);
    fleet.add(thing3);
    fleet.add(thing4);

    std::cout << fleet.toString() << std::endl;
    return 0;
}