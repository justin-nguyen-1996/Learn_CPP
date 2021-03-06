/*
    Author:  Justin Nguyen
    Created: 5/30/2016

    Write a program to simulate a ball being dropped from a tower
    Distance fallen = gravity_constant * x_seconds^2 / 2

    Sample output:
    Enter the initial height of the tower in meters: 100
    At 0 seconds, the ball is at height: 100 meters
    At 1 seconds, the ball is at height: 95.1 meters
    At x seconds, the ball is on the ground.
*/

#include <iostream>
#include "constants.h"

double getTowerHeight() {
	std::cout << "Enter the initial height of the tower in meters: ";
	int height;
	std::cin  >> height;
	return height;
}

double distFallen() {
	static int sec_passed {0};
	double dist_fallen = constants::GRAVITY * sec_passed * sec_passed / 2;
	sec_passed += 1;
	return dist_fallen;
}

void printResult(double new_height) {
	static int sec_passed {0};

	if (new_height > 0) {
		std::cout << "At " << sec_passed << " seconds, the ball " <<
			"is at height: " << new_height << " meters.\n";
	} else {
		std::cout << "At " << sec_passed << " seconds, the ball " <<
			"is on the ground.\n";
	}

	sec_passed += 1;
}

int main() {
	double init_height {getTowerHeight()};
	double current_height {init_height};
	while (current_height > 0) {
		current_height = init_height - distFallen();
		printResult(current_height); 
	}

	return 0;
}
