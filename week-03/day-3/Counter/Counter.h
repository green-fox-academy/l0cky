//
// Created by l0cky on 2019-04-17.
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter(int value = 0);

    int get();

    void add(int number = 1);

    void reset();

private:
    int _value;
    int _initialValue;

};


#endif //COUNTER_COUNTER_H
