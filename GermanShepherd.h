//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_GERMANSHEPHERD_H
#define WOOFFURS_GERMANSHEPHERD_H
#include "Dog.h"

class GermanShepherd : public Dog {

public:
    GermanShepherd(string &name, int age, int weight);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    const string breed = "a German Shepherd";
    const int riskWeight = 30;
    const bool subjectToSeniorDiscount = true;
    const float belowRiskWeight = 27.50;
    const float atOrAboveRiskWeight = 29.75;
};

#endif //WOOFFURS_GERMANSHEPHERD_H
