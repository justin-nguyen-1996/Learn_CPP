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

void printNameList (std::string* name_list, int total_names) {
	for (int i = 0; i < total_names; i += 1) {
		std::cout << name_list[i] << "\n";
	}
}

void sortNames(std::string* names_list, int total_names) {
	
}

int main() {
	using namespace std;

	int total_names;
	do {
		cout << "How many names would you like to enter? ";
		cin >> total_names;
	} while (testBadInput() == ErrorType::ERROR);

	string* name_list = new string[total_names];
	for (int name_counter = 0; 
		name_counter < total_names; 
		name_counter += 1) {

		// indexing at 0 for counter, at 1 for name #
		cout << "Enter name #" << (name_counter + 1) << ": ";
		getline(cin, name_list[name_counter]);
	}

	// printNameList(name_list, total_names);
	
	std::cout << "Here is your sorted list:\n";
	sortNames(name_list, total_names);
}
