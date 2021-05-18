//
// Created by philip on 2021-05-09.
//

#include <iostream>
#include "Husky.h"
#include "Constants.h"
Husky::Husky(string name, int age, int weight) : Dog() {
    this->name = name;
    this->age = age;
    this->weight = weight;
}

string Husky::getBreed() {
    return breed;
}

float Husky::getBasePremium() {
    if( weight < riskWeight) {
        return belowRiskWeight;
    }
    return atOrAboveRiskWeight;
}

float Husky::getPremium() {
    float premium = getBasePremium();
    return premium;
    //* no age discount
}
