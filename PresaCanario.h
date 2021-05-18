//
// Created by philip on 2021-05-09.
//

#ifndef WOOFFURS_PRESACANARIO_H
#define WOOFFURS_PRESACANARIO_H
#include "Dog.h"

class PresaCanario : public Dog {

public:
    PresaCanario(string &name, int age, int weight);
    string getBreed() override;
    string getName() override;
    float getPremium() override;

protected:
    float getBasePremium() override;

private:
    const string breed = "A Presa Canario";
    const int riskWeight = 45;
    const bool subjectToSeniorDiscount = false;
    const float belowRiskWeight = 20.01;
    const float atOrAboveRiskWeight = 20.55;
};


#endif //WOOFFURS_PRESACANARIO_H
