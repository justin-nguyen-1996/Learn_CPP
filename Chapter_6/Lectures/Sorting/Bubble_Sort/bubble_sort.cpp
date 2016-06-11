/*
    Author:  Justin Nguyen
    Created: 6/11/2016
*/

#include <iostream>
#include <utility>

int main() {
	int array[] = {6, 3, 2, 9, 7, 1, 5, 4, 8};
	int array_size = sizeof(array) / sizeof(array[0]);

	for (int start_i = 0; start_i < array_size - 1; start_i += 1) {
		for (int cur_i_low = start_i; 
			cur_i_low < array_size - 1; cur_i_low += 1) {
			
			int cur_i_hi = cur_i_low + 1;
			if (array[cur_i_low] > array[cur_i_hi]) {
				std::swap(array[cur_i_low], array[cur_i_hi]);
			}
		}
	}

	std::string comma_space;
	for (el : array) {
		std::cout << comma_space;
		std::cout << el;
		comma_space = ", ";
	}
	std::cout << "\n";
}
