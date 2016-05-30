/*
    Author:  Justin Nguyen
    Created: 5/29/2016

    Write the following program: The user is asked to 
    enter 2 floating point numbers (use doubles). 

    The user is then asked to enter one of the following 
    mathematical symbols: +, -, *, or /. 

    If the user enters an invalid symbol, the program prints nothing.
*/

#include <iostream>

double calcOp(const double a, const double b, const char op) {
	if (op == '+') { return a + b; }
	else if (op == '-') { return a - b; }
	else if (op == '*') { return a * b; }
	else if (op == '/') { return a / b; }
	else { return 0.0; }
}

int main() {
	std::cout <<  "Enter a double value: ";
	double a;
	std::cin  >> a;

	std::cout << "Enter a second double value: ";
	double b;
	std::cin  >> b;

	std::cout << "Enter one of the following: +, -, *, or/: ";
	char op;
	std::cin  >> op;
	
	if ((op != '+') && (op != '-') && (op != '*') && (op != '/')) {
		return 1;
	}

	std::cout << a << " " << op << " " << b << " " << 
		"is " << calcOp(a,b,op) << "\n";
	return 0;
}
