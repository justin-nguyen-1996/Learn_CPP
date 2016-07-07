/*
    Author:  Justin Nguyen
    Created: 7/5/2016
*/

#include <iostream>

int fibonacci(int x) {
    if (x <= 2) { return 2; }
    
    int two_ago = 1;
    int one_ago = 1;
    int cur;
    for (int counter = 2; counter < x; counter += 1) {
        cur = one_ago + two_ago;
        two_ago = one_ago;
        one_ago = cur;
    }
    
    return cur;
}

int main() {
    std::cout << "Fibonacci(0): " << fibonacci(0) << "\n";
    std::cout << "Fibonacci(1): " << fibonacci(1) << "\n";
    std::cout << "Fibonacci(2): " << fibonacci(2) << "\n";
    std::cout << "Fibonacci(3): " << fibonacci(3) << "\n";
    std::cout << "Fibonacci(7): " << fibonacci(7) << "\n";
}

