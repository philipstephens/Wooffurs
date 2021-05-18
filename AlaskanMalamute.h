//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_ALASKANMALAMUTE_H
#define WOOFFURS_ALASKANMALAMUTE_H
#include "Dog.h"
#include <string>
using namespace std;

class AlaskanMalamute: public Dog {
public:
    AlaskanMalamute(string name, int age, int weight);
    string getBreed() override;
    int    getRiskWeight() override;
    bool   getSubjectToSeniorDiscount() override;
    float  getBelowRiskWeightPremium() override;
    float  getAtOrAboveRiskWeightPremium() override;

private:
    const string breed = "An Alaskan Malamute";
    const char letterCode = 'm';
    const int riskWeight = 38;
    const bool subjectToSeniorDiscount = true;
    const float belowRiskWeight = 15.50;
    const float atOrAboveRiskWeight = 18.15;
};

#endif //WOOFFURS_ALASKANMALAMUTE_H
