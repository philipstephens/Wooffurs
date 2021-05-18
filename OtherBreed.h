//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_OTHERBREED_H
#define WOOFFURS_OTHERBREED_H
#include "Dog.h"

class OtherBreed : public Dog {
public:
    OtherBreed(string name, int age, int weight);
    string getBreed() override;
    int    getRiskWeight() override;
    bool   getSubjectToSeniorDiscount() override;
    float  getBelowRiskWeightPremium() override;
    float  getAtOrAboveRiskWeightPremium() override;

private:
    const string breed = "Another breed";
    const int riskWeight = 35;
    const bool subjectToSeniorDiscount = true;
    const float belowRiskWeight = 4.95;
    const float atOrAboveRiskWeight = 8.95;
};

#endif //WOOFFURS_OTHERBREED_H
