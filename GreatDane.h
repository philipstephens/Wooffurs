//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_GREATDANE_H
#define WOOFFURS_GREATDANE_H
#include "Dog.h"

class GreatDane : public Dog {
public:
    GreatDane(string &name, int age, int weight);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    const string breed = "A Great Dane";
    const  int riskWeight = 55;
    const  bool subjectToSeniorDiscount = true;
    const float belowRiskWeight = 25.10;
    const float atOrAboveRiskWeight = 25.20;
};

#endif //WOOFFURS_GREATDANE_H
