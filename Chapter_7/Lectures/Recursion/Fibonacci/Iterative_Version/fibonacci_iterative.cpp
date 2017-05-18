/*
    Author:  Justin Nguyen
    Created: 7/5/2016
*/

#include <iostream>

int fibonacci(int x) {
	if      (x == 0) { return 0; }
	else if (x == 1) { return 1; }
    
    int two_ago = 0;
    int one_ago = 1;
    int cur;
    for (int counter = 1; counter < x; counter += 1) {
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
    std::cout << "Fibonacci(4): " << fibonacci(4) << "\n";
    std::cout << "Fibonacci(5): " << fibonacci(5) << "\n";
    std::cout << "Fibonacci(6): " << fibonacci(6) << "\n";
    std::cout << "Fibonacci(7): " << fibonacci(7) << "\n";
}

