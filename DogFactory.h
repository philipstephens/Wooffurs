//
// Created by philip on 2021-05-08.
//

#ifndef WOOFFURS_DOGFACTORY_H
#define WOOFFURS_DOGFACTORY_H
#include <string>
#include "Dog.h"

using namespace std;

class DogFactory {
public:
    DogFactory(char breedType, string name, int age, int weight);
    DogFactory(char breedType, string name);
    Dog* getDog();
private:
    Dog* dog;
};

#endif //WOOFFURS_DOGFACTORY_H
