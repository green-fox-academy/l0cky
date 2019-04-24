//
// Created by l0cky on 2019-04-24.
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H


#include "instrument.h"

class StringedInstrument : public Instrument {
public:
    StringedInstrument();

    ~StringedInstrument();

    void play() override;

    virtual std::string sound() = 0;

    std::string getNameAsString();

    std::string getNumberOfStringsAsString();

protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
