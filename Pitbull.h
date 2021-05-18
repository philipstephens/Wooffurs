//
// Created by philip on 2021-05-08.
//

#ifndef WOOFFURS_PITBULL_H
#define WOOFFURS_PITBULL_H

#include "Dog.h"

class Pitbull : public Dog {
public:
    Pitbull(string &name, int age, int weight);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    string breed = "A Pitbull";
    const int   riskWeight = 20;
    const bool  subjectToSeniorDiscount = false;
    const float belowRiskWeight = 30.20;
    const float atOrAboveRiskWeight = 35.15;
};

#endif //WOOFFURS_PITBULL_H
