/*
	Author:  Justin Nguyen
	Created: 7/4/2016
*/

#include <iostream>
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

int main() {
	using namespace std;

	/* get input from user */
	int int_a; int int_b;
	char op;

	do {
		cout << "Enter an integer: ";
		cin >> int_a;
	} while (inputStatus() == BadInput::FAILURE);

	do {
		cout << "Enter an integer: ";
		cin >> int_b;
	} while (inputStatus() == BadInput::FAILURE);

	do {
		cout << "Enter a mathematical operation (+,-,*,/): ";
		cin >> op;
	} while (! (op == '+'   ||   op == '-'   ||
				op == '*'   ||   op == '/'));
}
