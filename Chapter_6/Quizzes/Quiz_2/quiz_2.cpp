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

ErrorType testBadInput() {
	using namespace std;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Error. Enter a valid integer (0-100): ";
		return ErrorType::FAILURE;
	}

	cin.ignore(32767, '\n');
	return ErrorType::SUCCESS;
}

int main() {
	using namespace std;

	/* get number of students */
	cout << "How many students do you want to enter? ";
	int num_people;
	do {
		cin >> num_people;
	} while (testBadInput() == ErrorType::FAILURE);

	/* dynamic array holding all students */
	int* student_list = new int[num_people];

	/* get names and grades for each student */
	cout << "Enter a student's name: ";
	string name;
	getline(std::cin, name);

	cout << "Enter the student's grade: ";
	int grade;
	do {
		cin >> grade;
	} while (testBadInput() == ErrorType::FAILURE);
}
