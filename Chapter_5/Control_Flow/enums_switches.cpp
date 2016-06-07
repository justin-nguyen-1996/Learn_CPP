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

int main() {
        
}
