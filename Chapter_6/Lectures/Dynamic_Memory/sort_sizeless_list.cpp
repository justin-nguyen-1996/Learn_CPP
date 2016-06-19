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

/* use this if need to have ErrorType act as an integer */
/*namespace ErrorType {
	enum ErrorType {
		SUCCESS,
		ERROR
	};
}*/

enum class ErrorType {
	SUCCESS,
	ERROR
};

ErrorType testBadInput() {
	using namespace std;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Error: you didn't enter a valid integer\n";
		return ErrorType::ERROR;
	}

	cin.ignore(32767, '\n');
	return ErrorType::SUCCESS;
}

int main() {
	using namespace std;

	int total_names;
	do {
		cout << "How many names would you like to enter? ";
		cin >> total_names;
	} while (testBadInput() == ErrorType::ERROR);

	int name_counter = 0;
	while (name_counter < total_names) {
		// indexing at 0 for counter, at 1 for name #
		cout << "Enter name #" << (name_counter + 1) << ": ";
		const int MAX_NAME_CHARS = 255;
		char name[MAX_NAME_CHARS]; 

		cin.getline (name, MAX_NAME_CHARS);
		name_counter += 1;
	}
}
