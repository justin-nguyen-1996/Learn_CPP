#include <iostream>
#include <string>

int main() {
	using namespace std;
	const string names_list[] = { 
		"Alex", "Betty", "Caroline", 
		"Dave", "Emily", "Fred",
		"Greg", "Holly" 
	};

	cout << "Enter a name: ";
	string name;
	getline(cin, name);
	cin.ignore(32767, '\n');

	bool test_is_there = false;
	for (string s : names_list) {
		if (name == s){
			test_is_there = true;
			break;
		}
	}

	string str_temp;
	(test_is_there == true) ? 
		str_temp = "was found" : str_temp = "was not found";
	cout << name << str_temp;
}
