/*
    Author:  Justin Nguyen
    Created: 6/19/2016
*/

/*
	Sample Output:

	How many names would you like to enter? 5
	Enter name #1: Jason
	Enter name #2: Mark
	Enter name #3: Alex
	Enter name #4: Chris
	Enter name #5: John

	Here is your sorted list:
	Name #1: Alex
	Name #2: Chris
	Name #3: Jason
	Name #4: John
	Name #5: Mark
*/

#include <iostream>
#include <string>

void testBadInput() {
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Error: you didn't enter a valid integer\n";
	}

	std::cin.ignore(32767, '\n');
}

int main() {
	std::cout << "How many names would you like to enter? ";

	int num_names;
	std::cin >> num_names;
	testBadInput();
}
