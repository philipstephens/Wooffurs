//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_HUSKY_H
#define WOOFFURS_HUSKY_H
#include "Dog.h"

class Husky : public Dog {
public:
    Husky(string name, int age, int weight);
    string getBreed() override;
    float  getPremium() override;

protected:
    float  getBasePremium() override;

private:
    string name;
    int weight;
    int age;
    const string breed = "A Husky";
    const int riskWeight = 20;
    const bool subjectToSeniorDiscount = true;
    const float belowRiskWeight = 9.95;
    const float atOrAboveRiskWeight = 12.00;
};

#endif //WOOFFURS_HUSKY_H
