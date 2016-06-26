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

	bool test_is_there = false;
	for (const string& s : names_list) {
		if (name == s){
			test_is_there = true;
			break;
		}
	}

	string str_temp;
	//(test_is_there == true) ? 
	//	str_temp = " was found\n" : str_temp = " was not found\n";
	test_is_there ?
		str_temp = "" : str_temp = "not ";
	//cout << name << str_temp;
	cout << name << " was " << str_temp << "found\n";
}
