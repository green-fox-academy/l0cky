//
// Created by l0cky on 2019-04-24.
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H


#include "stringedInstrument.h"

class Violin : public StringedInstrument {
public:
    explicit Violin(int numberOfStrings);

    Violin();

    ~Violin();

    std::string sound() override;

private:
    std::string _sound;
};


#endif //INSTRUMENTS_VIOLIN_H
