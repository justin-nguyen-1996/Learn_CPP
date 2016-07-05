/*
    Author:  Justin Nguyen
    Created: 7/5/2016
*/

#include <iostream>

int factorial(int x) {
    if (x <= 1) { return 1; }
    
    return x * factorial(x-1);
}

int main() {
    std::cout << "Factorial(0): " << factorial(0) << "\n";
    std::cout << "Factorial(1): " << factorial(0) << "\n";
    std::cout << "Factorial(2): " << factorial(0) << "\n";
    std::cout << "Factorial(3): " << factorial(0) << "\n";
    std::cout << "Factorial(7): " << factorial(0) << "\n";
}

