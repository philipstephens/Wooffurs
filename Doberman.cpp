//
// Created by philip on 2021-05-08.
//

#include "Doberman.h"

#include <string>
using namespace std;

Doberman::Doberman(string &name, int pAge, int pWeight) : Dog() {
    Dog::setName(name);
    Dog::setAge(pAge);
    Dog::setWeight(pWeight);
}

string Doberman::getBreed() {
    return this->breed;
}

float Doberman::getBasePremium() {
    if( Dog::getWeight() < this->riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float Doberman::getPremium() {
    float premium = getBasePremium();
    if(this->subjectToSeniorDiscount) {
        if(getAge() >= Dog::SENIOR_AGE) {
            premium = premium - Dog::SENIOR_DISCOUNT * premium;
        }
    }
    return premium;
}

string Doberman::getName() {
    return Dog::getName();
}
