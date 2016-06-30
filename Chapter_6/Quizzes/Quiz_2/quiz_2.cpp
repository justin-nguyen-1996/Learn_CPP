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

ErrorType testBadInput(int input) {
	using namespace std;

	if (cin.fail()   ||   input < 0   ||   input > 100) {
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
	int num_students;
	do {
		cin >> num_students;
	} while (testBadInput(num_students) == ErrorType::FAILURE);

	/* dynamic array holding all students */
	student* student_list = new student[num_students];

	for (int student_i = 0; student_i < num_students; student_i += 1) {
		/* get names for each student */
		cout << "Enter a student's name: ";
		string name;
		getline(std::cin, name);

		/* get grades for each student */
		cout << "Enter the student's grade: ";
		int grade;
		do {
			cin >> grade;
		} while (testBadInput(grade) == ErrorType::FAILURE);

		student_list[student_i] = {name, grade};
		//student_list[student_i].name = name;
		//student_list[student_i].grade = grade;
	}

	/* print the info */
	cout << "\n";
	for (int student_i = 0; student_i < num_students; student_i += 1) {
		cout << student_list[student_i].name << " got a grade of " << 
			student_list[student_i].grade << "\n";
	}

	delete[] student_list;
}
