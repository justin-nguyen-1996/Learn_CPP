/*
	Author:  Justin Nguyen
	Created: 6/29/2016
*/

/* Create a struct that holds a student’s name and grade 
	   (on a scale of 0-100). 
   Ask the user how many students they want to enter. 
   Dynamically allocate an array to hold all of the students. 
   Then prompt the user for each name and grade. 
   Once the user has entered all the names and grades, 
       sort the list by grade (highest first). 
   Then print all the names and grades in sorted order.

For the following input:

Joe
82
Terry
73
Ralph
4
Alex
94
Mark
88

The output should look like this:

Alex got a grade of 94
Mark got a grade of 88
Joe got a grade of 82
Terry got a grade of 73
Ralph got a grade of 4
*/


#include <iostream>
#include "error_type.h"
#include "quiz_2.h"

int main() {
	std::cout << "How many people do you want to enter?";
	int num_people;
	do {
		std::cin >> num_people;
	} while (testBadInput() == ErrorType::FAILURE);

	grade_t person 
}
