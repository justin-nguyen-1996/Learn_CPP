/*
	Author:  Justin Nguyen
	Created: 7/4/2016
*/

#include <iostream>
#include "BadInput.h"

inline BadInput isBadInput() {
	using namespace std;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Error";
	}
	
	cin.ignore(32767, '\n');
}

int main() {
	using namespace std;

	int int_a; int int_b;
	char op;
	do {
		cout << "Enter an integer: ";
		cin >> a;
		cout << "Enter an integer: ";
		cin >> b;
		cout << "Enter a mathematical operation (+,-,*,/): ";
		cin >> op;
	} while (isBadInput == BadInput::FAILURE);
}
