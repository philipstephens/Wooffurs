//
// Created by philip on 2021-05-09.
//

#include "AlaskanMalamute.h"

AlaskanMalamute::AlaskanMalamute(string name, int age, int weight) : Dog() {
    this->setName(name);
    this->setAge(age);
    this->setWeight(weight);
    Dog::setName(name);
    Dog::setAge(age);
    Dog::setWeight(weight);
    Dog::setBreed(this->breed);
    Dog::setSubjectToSeniorDiscount(this->subjectToSeniorDiscount);
    Dog::setRiskWeight(this->riskWeight);
    Dog::setBelowRiskWeightPremium(this->belowRiskWeight);
    Dog::setAtOrAboveRiskWeightPremium(atOrAboveRiskWeight);
}

string AlaskanMalamute::getBreed() {
    return breed;
}

int AlaskanMalamute::getRiskWeight()  {
    return riskWeight;
}

bool AlaskanMalamute::getSubjectToSeniorDiscount() {
    return subjectToSeniorDiscount;
}

float AlaskanMalamute::getBelowRiskWeightPremium() {
    return belowRiskWeight;
}

float AlaskanMalamute::getAtOrAboveRiskWeightPremium() {
    return atOrAboveRiskWeight;
}
