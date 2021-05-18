//
// Created by philip on 2021-05-08.
//

#ifndef WOOFFURS_DOBERMAN_H
#define WOOFFURS_DOBERMAN_H

#include "Dog.h"

class Doberman : public Dog {
public:
    Doberman(string &name, int age, int weight);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    string breed = "A Doberman";
    const int riskWeight = 35;
    const bool subjectToSeniorDiscount = true;
    const float belowRiskWeight = 28.16;
    const float atOrAboveRiskWeight = 30.00;
};

#endif //WOOFFURS_DOBERMAN_H
