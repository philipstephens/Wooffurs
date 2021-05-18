//
// Created by philip on 2021-05-08.
//

#ifndef WOOFFURS_ROTTWEILER_H
#define WOOFFURS_ROTTWEILER_H
#include "Dog.h"

class Rottweiler : public Dog {
public:
    Rottweiler(string &name, int age, int weight);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    string breed = "A Rottweiler";
    const int riskWeight = 45;
    const bool subjectToSeniorDiscount = false;
    const float belowRiskWeight = 28.00;
    const float atOrAboveRiskWeight = 29.75;
};

#endif //WOOFFURS_ROTTWEILER_H
