/*
	Author:  Justin Nguyen
	Created: 7/7/2016
*/

#include <iostream>
#include <array>

void reverseDigits(int num) {
	if (num < 10) { 
		std::cout << num;
		return; 
	}

	std::cout << (num % 10);
	reverseDigits(num / 10);
}

int main() {
	std::array<int, 5> array_of_nums
		{ 1, 1234, 182940, 1111, 1010 };
	for (int num : array_of_nums) {
		std::cout << "reverseDigits(" << num << "): ";
		reverseDigits(num);
		std::cout << "\n";
	}
}

