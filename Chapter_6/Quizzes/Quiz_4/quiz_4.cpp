/*
	Author:  Justin Nguyen
	Created: 6/30/2016
*/

/* Write a function to print a C-style string (character by character). 
   Use a pointer to step through and print that character. 
   Stop when you hit a null terminator. 
   Write a main function that tests the function. */

#include <iostream>

void printMyString(const char* str) {
	int i = 0;
	while (str[i] != 0) {
		std::cout << str[i];
		i += 1;
	}

	std::cout << "\n";
}

int main() {
	const char* str = "Hello";
	printMyString(str);
	std::cout << str << "\n";
}
