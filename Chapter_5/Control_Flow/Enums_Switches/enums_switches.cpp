/*
    Author:  Justin Nguyen
    Created: 6/7/2016
*/

#include <iostream>
#include <string>
#include "enums_switches.h"

std::string getAnimalName(Animal_t animal) {
        switch(animal) {
                case 0: return "pig"; break;
                case 1: return "chicken"; break;
                case 2: return "goat"; break;
                case 3: return "cat"; break;
                case 4: return "dog"; break;
                case 5: return "ostrich"; break;
                default: return "error: this animal doesn't exist"; break;
        }
}

void printNumberOfLegs(Animal_t animal) {
        int legs;
        switch(animal) {
                case 0: legs = 4; break;
                case 1: legs = 2; break;
                case 2: legs = 4; break;
                case Animal_t::CAT: legs = 4; break;
                case 4: legs = 4; break;
                case 5: legs = 2; break;
                default: legs = 0; break;
        }
        
        std::cout << "A " << getAnimalName(animal) << " has " <<
                legs << " legs.\n";
}

int main() {
        auto cat = Animal_t::CAT;
        printNumberOfLegs(cat);
        printNumberOfLegs(Animal_t::CHICKEN);
}

