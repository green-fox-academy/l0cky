//
// Created by l0cky on 2019-04-17.
//

#include "Counter.h"

Counter::Counter(int value)
{
    Counter::_value = value;
    Counter::_initialValue = value;
}

int Counter::get()
{
    return Counter::_value;
}

void Counter::add(int number)
{
    Counter::_value += number;
}

void Counter::reset()
{
    Counter::_value = Counter::_initialValue;
}


