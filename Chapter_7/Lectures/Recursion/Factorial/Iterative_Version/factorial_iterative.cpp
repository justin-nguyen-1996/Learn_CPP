/*
    Author:  Justin Nguyen
    Created: 7/5/2016
*/

#include <iostream>

int factorial(int x) {
    int res = 1;
    while (x > 1) {
        res *= x;
        x -= 1;
    }
    
    return res;
}

int main() {
    std::cout << "Factorial(0): " << factorial(0) << "\n";
    std::cout << "Factorial(1): " << factorial(1) << "\n";
    std::cout << "Factorial(2): " << factorial(2) << "\n";
    std::cout << "Factorial(3): " << factorial(3) << "\n";
    std::cout << "Factorial(7): " << factorial(7) << "\n";
}

