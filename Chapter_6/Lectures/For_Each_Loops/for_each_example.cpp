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


}
