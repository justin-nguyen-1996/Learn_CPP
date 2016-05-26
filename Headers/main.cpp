#include <iostream>
#include "add.h"

int main() {
	int a, b;

	std::cout << "Enter two numbers: ";
	std::cin  >> a;
	std::cin  >> b;
	std::cout << "Sum: " << add(a,b) << endl;
}
