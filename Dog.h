//
// Created by philip on 2021-05-08.
//

#ifndef WOOFFURS_DOG_H
#define WOOFFURS_DOG_H
#include <string>

using namespace std;

class Dog {

public:
    Dog();

    virtual string getName();
    virtual string getBreed();
    virtual float getPremium();
    virtual int getWeight();
    virtual int getAge();

    virtual void setName(const string &name);
    virtual void setAge(int age);
    virtual void setWeight(int weight);


protected:
    virtual float getBasePremium();
    int const SENIOR_AGE = 13;
    float const SENIOR_DISCOUNT = 0.20;

private:
    string name;
    int age;
    int weight;
};

#endif //WOOFFURS_DOG_H
