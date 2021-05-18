//
// Created by philip on 2021-05-09.
//

#include "ChowChow.h"
#include <string>
using namespace std;

ChowChow::ChowChow(string &name, int pAge, int pWeight) : Dog() {
    Dog::setName(name);
    Dog::setAge(pAge);
    Dog::setWeight(pWeight);
}

string ChowChow::getBreed() {
    return this->breed;
}

float ChowChow::getBasePremium() {
    if( Dog::getWeight() < this->riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float ChowChow::getPremium() {
    float premium = getBasePremium();
    if(this->subjectToSeniorDiscount) {
        if(getAge() >= Dog::SENIOR_AGE) {
            premium = premium - Dog::SENIOR_DISCOUNT * premium;
        }
    }
    return premium;
    //* no age discount
}

string ChowChow::getName() {
    return Dog::getName();
}
