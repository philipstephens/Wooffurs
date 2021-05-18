//
// Created by philip on 2021-05-08.
//

#include "DogFactory.h"

#include <utility>
#include "Pitbull.h"
#include "Doberman.h"
#include "Rottweiler.h"
#include "GermanShepherd.h"
#include "ChowChow.h"
#include "GreatDane.h"
#include "PresaCanario.h"
#include "Akita.h"

/*
#include "OtherBreed.h"
#include "AlaskanMalamute.h"
#include "Husky.h"
*/

DogFactory::DogFactory(char breedType, string name, int age, int weight) {

    switch (breedType) {
        case 'p':
             dog = new Pitbull(name, age, weight);
             break;
        case 'd':
             dog = new Doberman(name, age, weight);
             break;
        case 'r':
            dog = new Rottweiler(name, age, weight);
            break;
        case 'g':
            dog = new GermanShepherd(name, age, weight);
            break;
        case 'c':
            dog = new ChowChow(name, age, weight);
            break;
        case 't':
            dog = new GreatDane(name, age, weight);
            break;
        case 's':
            dog = new PresaCanario(name, age, weight);
            break;
            /*
        case 'm':
            dog = AlaskanMalamute(name, age, weight);
            break;
        case 'h':
            dog = new Husky(name, age, weight);
            break;
        case 'b':
            dog = OtherBreed(name, age, weight);
            break;
*/
        default:
            break;
    }
}

DogFactory::DogFactory(char breedType, string name) {
    if(breedType == 'k') dog = new Akita(name);
}

Dog* DogFactory::getDog() {
    return dog;
}