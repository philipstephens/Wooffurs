//
// Created by philip on 2021-05-08.
//

#include "Rottweiler.h"
#include <string>
using namespace std;

Rottweiler::Rottweiler(string &name, int pAge, int pWeight) : Dog() {
    Dog::setName(name);
    Dog::setAge(pAge);
    Dog::setWeight(pWeight);
}

string Rottweiler::getBreed() {
    return this->breed;
}

float Rottweiler::getBasePremium() {
    if( Dog::getWeight() < this->riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float Rottweiler::getPremium() {
    float premium = this->getBasePremium();
    if(this->subjectToSeniorDiscount) {
        if(getAge() >= Dog::SENIOR_AGE) {
            premium = premium - Dog::SENIOR_DISCOUNT * premium;
        }
    }
    return premium;
    //* no age discount
}

string Rottweiler::getName() {
    return Dog::getName();
}
