#ifndef DICE_SET_DICE_SET_H
#define DICE_SET_DICE_SET_H

#include <iostream>
#include <vector>

class DiceSet
{
public:

    DiceSet();

    void roll();
    void roll(int i);
    std::vector<int> getCurrent() const;
    int getCurrent(int i) const;
private:
    std::vector<int> dices;
};


#endif //DICE_SET_DICE_SET_H