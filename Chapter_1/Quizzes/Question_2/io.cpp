#include <iostream>

int readNumber() {
    int x;
    std::cout << "Enter a number: ";
    std::cin  >> x;
    return x;
}

void writeAnswer(int ans) {
    std::cout << "Sum: " << ans << std::endl;
}
