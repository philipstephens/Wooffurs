//
// Created by philip on 2021-05-09.
//

#include "Akita.h"
#include "Dog.h"
#include <string>
using namespace std;

Akita::Akita(string &name) : Dog() {
    Dog::setName(name);
}

string Akita::getBreed() {
    return this->breed;
}

float Akita::getBasePremium() {
    return 19.75;
}

float Akita::getPremium() {
    return this->getBasePremium();
}

string Akita::getName() {
    return Dog::getName();
}
