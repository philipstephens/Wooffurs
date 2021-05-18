//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_AKITA_H
#define WOOFFURS_AKITA_H

#include "Dog.h"

class Akita : public Dog {
public:
    Akita(string &name);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    string breed = "an Akita";
};

#endif //WOOFFURS_AKITA_H
