//
// Created by l0cky on 2019-04-24.
//

#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include "stringedInstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    explicit ElectricGuitar(int numberOfStrings);
    ElectricGuitar();

    ~ElectricGuitar();

    std::string sound() override;

private:
    std::string _sound;

};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
