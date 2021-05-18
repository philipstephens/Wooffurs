//
// Created by philip on 2021-05-09.
//

#include "GermanShepherd.h"
#include <string>
using namespace std;

GermanShepherd::GermanShepherd(string &name, int pAge, int pWeight) : Dog() {
    Dog::setName(name);
    Dog::setAge(pAge);
    Dog::setWeight(pWeight);
}

string GermanShepherd::getBreed() {
    return this->breed;
}

float GermanShepherd::getBasePremium() {
    if( Dog::getWeight() < this->riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float GermanShepherd::getPremium() {
    float premium = getBasePremium();
    if(this->subjectToSeniorDiscount) {
        if(getAge() >= Dog::SENIOR_AGE) {
            premium = premium - Dog::SENIOR_DISCOUNT * premium;
        }
    }
    return premium;
    //* no age discount
}

string GermanShepherd::getName() {
    return Dog::getName();
}