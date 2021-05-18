//
// Created by philip on 2021-05-09.
//

#include "PresaCanario.h"

#include <string>
using namespace std;

PresaCanario::PresaCanario(string &name, int pAge, int pWeight) : Dog() {
    Dog::setName(name);
    Dog::setAge(pAge);
    Dog::setWeight(pWeight);
}

string PresaCanario::getBreed() {
    return this->breed;
}

float PresaCanario::getBasePremium() {
    if( Dog::getWeight() < this->riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float PresaCanario::getPremium() {
    float premium = getBasePremium();
    if(this->subjectToSeniorDiscount) {
        if(getAge() >= Dog::SENIOR_AGE) {
            premium = premium - Dog::SENIOR_DISCOUNT * premium;
        }
    }
    return premium;
    //* no age discount
}

string PresaCanario::getName() {
    return Dog::getName();
}
