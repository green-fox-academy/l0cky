//
// Created by l0cky on 2019-04-24.
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H


#include "stringedInstrument.h"

class BassGuitar : public StringedInstrument {
public:
    explicit BassGuitar(int numberOfStrings);

    BassGuitar();

    ~BassGuitar();

    std::string sound() override ;

private:
    std::string _sound;
};


#endif //INSTRUMENTS_BASSGUITAR_H
