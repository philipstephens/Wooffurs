//
// Created by philip on 2021-05-09.
//

#include "GreatDane.h"

#include <string>
using namespace std;

GreatDane::GreatDane(string &name, int pAge, int pWeight) : Dog() {
    Dog::setName(name);
    Dog::setAge(pAge);
    Dog::setWeight(pWeight);
}

string GreatDane::getBreed() {
    return this->breed;
}

float GreatDane::getBasePremium() {
    if( Dog::getWeight() < this->riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float GreatDane::getPremium() {
    float premium = getBasePremium();
    if(this->subjectToSeniorDiscount) {
        if(getAge() >= Dog::SENIOR_AGE) {
            premium = premium - Dog::SENIOR_DISCOUNT * premium;
        }
    }
    return premium;
    //* no age discount
}

string GreatDane::getName() {
    return Dog::getName();
}
