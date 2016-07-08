/*
	Author:  Justin Nguyen
	Created: 7/7/2016
*/

#include <iostream>
#include <vector>
#include <string>

void reverseString(std::string str) {
	if (str.length() == 1) {
		std::cout << str;
		return;
	}

	std::cout << str.back();
	reverseString(str.substr(0,str.length() - 1));
}

int main() {
	std::vector<std::string> str_vec
		{ "abcd", "abc", "12bd8jgue", "ababa", "abab", "a", "aaa", "aabb" };
	
	for (std::string str : str_vec) {
		std::cout << "reverseString(" << str << "):\t\t";
		reverseString(str);
		std::cout << "\n";
	}
}
