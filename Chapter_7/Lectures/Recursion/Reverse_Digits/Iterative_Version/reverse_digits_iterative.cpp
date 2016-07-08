/*
	Author:  Justin Nguyen
	Created: 7/7/2016
*/

#include <iostream>
#include <array>

void reverseDigits(int &num) {
	int reversed_num = 0;
	while (num > 0) {
		reversed_num *= 10;
		reversed_num += num % 10;
		num /= 10;
	}

	num = reversed_num;
}

int main() {
	std::array<int, 5> array_of_nums
		{ 1, 1234, 182940, 1111, 1010 };
	for (int num : array_of_nums) {
		std::cout << "reverseDigits(" << num << "): ";
		reverseDigits(num);
		std::cout << num << "\n";
	}
}
