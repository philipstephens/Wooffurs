//
// Created by philip on 2021-05-08.
//

#include "Pitbull.h"
#include <string>
using namespace std;

Pitbull::Pitbull(string &name, int pAge, int pWeight) : Dog() {
    Dog::setName(name);
    Dog::setAge(pAge);
    Dog::setWeight(pWeight);
}

string Pitbull::getBreed() {
    return this->breed;
}

float Pitbull::getBasePremium() {
    if( Dog::getWeight() < this->riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float Pitbull::getPremium() {
    float premium = getBasePremium();
    if(this->subjectToSeniorDiscount) {
        if(getAge() >= Dog::SENIOR_AGE) {
            premium = premium - Dog::SENIOR_DISCOUNT * premium;
        }
    }
    return premium;
    //* no age discount
}

string Pitbull::getName() {
    return Dog::getName();
}
