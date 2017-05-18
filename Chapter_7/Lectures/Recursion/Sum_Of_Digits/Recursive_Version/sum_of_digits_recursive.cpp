/*
    Author:  Justin Nguyen
    Created: 7/5/2016
*/

#include <iostream>

int sumOfDigits(int x) {
    if (x < 10) { return x % 10; }
    return (x % 10) + sumOfDigits(x / 10);
}

int main() {
    std::cout << "sumOfDigits(0110): " << sumOfDigits(110) << "\n";
    std::cout << "sumOfDigits(2110): " << sumOfDigits(2110) << "\n";
    std::cout << "sumOfDigits(0113): " << sumOfDigits(113) << "\n";
    std::cout << "sumOfDigits(1423): " << sumOfDigits(1423) << "\n";
    std::cout << "sumOfDigits(12): " << sumOfDigits(12) << "\n";
    std::cout << "sumOfDigits(123497494): " << sumOfDigits(123497494) << "\n";
    std::cout << "sumOfDigits(93427): " << sumOfDigits(93427) << "\n";
    std::cout << "sumOfDigits(357): " << sumOfDigits(357) << "\n";
}

