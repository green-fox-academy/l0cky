#include "dice_set.h"

#include <stdlib.h>
#include <time.h>

DiceSet::DiceSet()
{
    srand(time(nullptr));
    dices = std::vector<int>(6);
}

void DiceSet::roll()
{
    for (int i = 0; i < dices.size(); i++) {
        dices[i] = (int) (rand() % 6) + 1;
    }
}

void DiceSet::roll(int i)
{
    dices[i] = (int) (rand() % 6) + 1;
}

std::vector<int> DiceSet::getCurrent() const
{
    return dices;
}

int DiceSet::getCurrent(int i) const
{
    return dices[i];
}