/*
	Author:  Justin Nguyen
	Created: 7/7/2016
*/

#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(std::string &str, int start, int end) {
	if (start >= end) {
		return true;
	} else if (str[start] != str[end]) {
		return false;
	} 

	return isPalindrome(str, start + 1, end - 1);
}

int main() {
	std::vector<std::string> str_vec
		{ "abba", "aba", "ab", "a", "abcba", "abbba", "abbcba" };

	for (auto &str : str_vec) {
		std::cout << "isPalindrome(" << str << "): "
				  << isPalindrome(str, 0, str.length() - 1) << "\n";
	}
}
