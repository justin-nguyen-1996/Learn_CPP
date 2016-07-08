/*
	Author:  Justin Nguyen
	Created: 7/7/2016
*/

#include <iostream>
#include <string>
#include <vector>

void swap(char &a, char &b) {
	char temp = a;
	a = b;
	b = temp;
}

void reverseString(std::string &str) {
	int length = str.length();
	for(int i = 0; i < length / 2; i += 1) {
		swap(str[i], str[length - 1 - i]);
	}
}

int main() {
	std::vector<std::string> str_vec
		{ "abcd", "abc", "12bd8jgue", "ababa", "abab", "a", "aaa", "aabb" };

	for (std::string str : str_vec) {
		std::cout << "reverseString(" << str << "):\t\t";
		reverseString(str);
		std::cout << str << "\n";
	}
}
