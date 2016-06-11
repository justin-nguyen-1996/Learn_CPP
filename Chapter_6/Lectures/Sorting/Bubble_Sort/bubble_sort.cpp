/*
    Author:  Justin Nguyen
    Created: 6/11/2016
*/

#include <iostream>
#include <utility>

void bubbleSort(int array[], int array_size) {

	for (int count = 0; count < array_size - 1; count += 1) {
		for (int lo_i = 0; lo_i < array_size - 1; lo_i += 1) {

			int hi_i = lo_i + 1;
			if (array[lo_i] > array[hi_i]) {
				std::swap(array[lo_i], array[hi_i]);
			}

		}
	}
}

void printArray(int array[], int array_size) {
	std::string comma_space;

	for (int i = 0; i < array_size; i += 1) {
		std::cout << comma_space;
		std::cout << array[i];
		comma_space = ", ";
	}

	std::cout << "\n";
}

int main() {
	int array[] = {6, 3, 2, 9, 7, 1, 5, 4, 8};
	int array_size = sizeof(array) / sizeof(array[0]);

	bubbleSort(array, array_size);
	printArray(array, array_size);

}
