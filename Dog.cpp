//
// Created by philip on 2021-05-08.
//

#include "Dog.h"
#include <string>
#include "Constants.h"
using namespace std;

Dog::Dog() {
}

// setters

void Dog::setName(const string &pname) {
   name = pname;
}

void Dog::setAge(int pAge) {
    age = pAge;
}

void Dog::setWeight(int pWeight) {
    weight = pWeight;
}

// getters

string Dog::getName() {
    return name;
}

int Dog::getWeight() {
    return weight;
}

int Dog::getAge() {
    return age;
}

string Dog::getBreed() {
    return std::string();
}

float Dog::getPremium() { return 0;}

float Dog::getBasePremium() { return 0;}