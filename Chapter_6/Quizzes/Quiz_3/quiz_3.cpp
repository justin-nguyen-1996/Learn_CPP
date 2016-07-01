/*
	Author:  Justin Nguyen
	Created: 6/30/2016
*/

/* Write your own function to swap the value of two integer variables 
   Write a main() function to test it */

#include <iostream>

void mySwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 4; int b = 2;
	mySwap(a,b);

	(a == 2 && b == 4) ? 
		std::cout << "works\n" :
		std::cout << "failed\n";
}
