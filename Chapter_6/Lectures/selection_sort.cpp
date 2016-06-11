/*
    Author:  Justin Nguyen
    Created: 6/10/2016
*/

#include <iostream>
#include <utility>

int main() {
	int array[10] = {1, 5, 10, 24, -3, 16, 28};
	int array_size = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < array_size - 1; i += 1) {
		int smallest_index = i;
		for (int j = i + 1; j < array_size; j += 1) {
			if (array[j] < array[smallest_index]) {
				smallest_index = j;
			}
		}
	}

	std::comma_space = "";
	for (x : array) {
		std::cout << comma_space;
		std::cout << x;
		comma_space = ", ";
	}
}
