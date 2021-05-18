#include <iostream>
#include <iomanip>
#include <string>
#include "DogFactory.h"

using namespace std;
// const string breedCodes = "pdrgctskmhb";
const string breedCodes = "pdrgctsk";
/* string breedNames[11] = {"Pitbull", "Doberman", "Rotweiller", "German Shepherd", "Chow Chow", "Great Dane",
                         "Presa Canario", "Akita", "Alaskan Malamute", "Husky", "Other Breed"}; */
string breedNames[8] = {"a Pitbull", "a Doberman", "a Rotweiller", "a German Shepherd", "a Chow Chow",
                        "a Great Dane", "a Presa Canario", "an Akita"};
string specialBreed = "k";

const int maxDogs = 10;
const int maxAge = 30;
const int maxWeight = 100;

int main() {

    cout<<setiosflags(ios::fixed);
    cout<<setprecision(2);
    int dogCount = 0;
    float totalPremium = 0;


    while(true) {
        cout << "Please enter the number of dogs in your household:";
        cin >> dogCount;
        if (dogCount > 0 && dogCount <= maxDogs) break;
    }

    for(int i=1; i <= dogCount; i++) {
        float basePremium = 0.0;
        float actualPremium = 0.0;
        int weight = 0;
        int age = 0;
        bool subjectToDiscount;
        char breedCode;
        string dogName;
        Dog* dog;

        cout << "Enter the name of dog #" << i << ": ";
        cin.ignore();
        getline(cin, dogName);

        int pos = 0;
        while(true) {
            cout << "Valid breed codes are [" << breedCodes << "]" << endl;
            cout << "Enter a valid breed code: ";
            cin >> breedCode;
            pos = breedCodes.find_first_of(breedCode);
            if( pos >= 0 && pos < breedCodes.length()) break;
        }

        cout << dogName << " is " << breedNames[pos] << endl;

        while(true) {
            if(specialBreed.find_first_of(breedCode) ) break;
            cout << "Enter the current age (1 to " << maxAge << ") for "<< dogName << ": ";
            cin >> age;
            if(age > 0 && age <= maxAge) break;
        }

        while(true) {
            if(specialBreed.find_first_of(breedCode)) break;
            cout << "Enter the weight ( 1 to " << maxWeight << " kg) for " << dogName << ": ";
            cin >> weight;
            if(weight > 0 && weight <= maxWeight) break;
        }

        DogFactory *dogFactory;

        if(specialBreed.find_first_of(breedCode)) {
            dogFactory = new DogFactory(breedCode, dogName);
        } else {
            dogFactory = new DogFactory(breedCode, dogName, age, weight);
        }

        dog = dogFactory->getDog();
        cout << "The monthly premium for " << dog->getName() << " is " << dog->getPremium() << endl << endl;
    }
    return 0;
}
