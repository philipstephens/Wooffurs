//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_CHOWCHOW_H
#define WOOFFURS_CHOWCHOW_H
#include "Dog.h"

class ChowChow : public Dog {
public:
    ChowChow(string &name, int age, int weight);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    const string breed = "a Chow Chow";
    const int riskWeight = 45;
    const bool subjectToSeniorDiscount = true;
    const float belowRiskWeight = 25.10;
    const float atOrAboveRiskWeight = 27.50;
};

#endif //WOOFFURS_CHOWCHOW_H
