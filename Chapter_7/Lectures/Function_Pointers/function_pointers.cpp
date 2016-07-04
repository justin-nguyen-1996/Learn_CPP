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

int getInteger() {
	cout << "Enter an integer: ";
	return cin;
}

char getChar() {
	cout << "Enter a mathematical operation (+,-,*,/): ";
	return 'c';//cin >> op;

}

int main() {
	using namespace std;

	/* get input from user */
	int int_a; int int_b;
	char op;

	do { int_a = getInteger(); } while (inputStatus() == BadInput::FAILURE);
	do { int_b = getInteger(); } while (inputStatus() == BadInput::FAILURE);
	do { op = getChar(); } while (inputStatus(op) == BadInput::FAILURE);
}
