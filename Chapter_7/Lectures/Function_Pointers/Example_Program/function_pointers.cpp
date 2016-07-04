/*
	Author:  Justin Nguyen
	Created: 7/4/2016
*/

#include <iostream>
#include <functional>
#include "BadInput.h"

inline BadInput inputStatus() {
	using namespace std;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Error. ";
		return BadInput::FAILURE;
	}
	
	cin.ignore(32767, '\n');
	return BadInput::SUCCESS;
}

inline BadInput inputStatus(char op) {
	using namespace std;

	if (! (op == '+'   ||   op == '-'   ||
		   op == '*'   ||   op == '/')) {
				cin.ignore(32767, '\n');
		   		cout << "Error. ";
				return BadInput::FAILURE;
	}

	cin.ignore(32767, '\n');
	return BadInput::SUCCESS;
}

inline int getInteger() {
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

inline char getChar() {
	std::cout << "Enter a mathematical operation (+,-,*,/): ";
	char op;
	std::cin >> op;
	return op;
}

inline int add(int a, int b) {
	return a + b;
}

inline int subtract(int a, int b) {
	return a - b;
}

inline int multiply(int a, int b) {
	return a * b;
}

inline int divide(int a, int b) {
	return a / b;
}

std::function<int (int,int)> getArithmeticFunction (char op) {
	if      (op == '+') { return add; }
	else if (op == '-') { return subtract; }
	else if (op == '*') { return multiply; }
	else if (op == '/') { return divide; }
	else 			    { return nullptr; }
}

int main() {
	using namespace std;

	/* get input from user */
	int int_a; int int_b; char op;
	do { int_a = getInteger(); } while (inputStatus() == BadInput::FAILURE);
	do { int_b = getInteger(); } while (inputStatus() == BadInput::FAILURE);
	do { op = getChar(); } while (inputStatus(op) == BadInput::FAILURE);

	/* calculate the result */
	int res = getArithmeticFunction(op)(int_a, int_b);

	/* print the result */
	cout << "x " << op << " y = " << res << "\n";
}
