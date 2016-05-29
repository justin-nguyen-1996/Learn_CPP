/*
    Author:  Justin Nguyen
    Created: 5/29/2016
*/

#include <iostream>

double calcOP(const double a, const double b, const char op) {
	if (op == '+') { return a + b; }
	else if (op == "-") { return a - b; }
	else if (op == "*") { return a * b; }
	else if (op == "/") { return a / b; }
}

int void main() {
	std::cout <<  "Enter a double value: ";
	double a;
	std::cin  >> a;

	std::cout << "\nEnter a second double value: ";
	double b;
	std::cin  >> b;

	std::cout << "\nEnter one of the following: +, -, *, or/: ";
	char op;
	std::cin  >> op;
	
	if ((op != '+') && (op != '-') && (op != '*') && (op != '/')) {
		return 1;
	}

	std::cout << a << " " << op << " " << "is " << calcOp(a,b,op) << "\n";
	return 0;
}
