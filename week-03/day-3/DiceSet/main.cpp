#include <iostream>

#include "dice_set.h"

int main(int argc, char *args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();

    int sumOfDices;
    int counter = 1;

    while (true) {
        sumOfDices = 0;
        std::cout << counter << ": ";
        for (int i = 0; i < diceSet.getCurrent().size(); ++i) {
            sumOfDices += diceSet.getCurrent(i);
            std::cout << diceSet.getCurrent(i) << ": ";
        }
        std::cout << sumOfDices << std::endl;

        if ( sumOfDices > 35) {
            break;
        }
        diceSet.roll();
        ++counter;
    }

    std::cout << counter << " roll is the winner." << std::endl;

    return 0;
}