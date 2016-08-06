/*
 * Author:  Justin Nguyen
 * Created: 8/3/2016
 */
 
#include <iostream>
#include "StudentGrades.h"
#include "GradeMap.h"

int main() {
    GradeMap grades;
    grades["Joe"] = 'A';
    grades["Jon"] = 'F';
    
    std::cout << "Joe has a grade of " << grades["Joe"] << "\n";
    std::cout << "Jon has a grade of " << grades["Jon"] << "\n";
}

