/*
 * Author:  Justin Nguyen
 * Created: 8/3/2016
 */
 
#include <iostream>
#include "GradeMap.h"

char& GradeMap::operator[] (const std::string& name) {
    // check to see if the student is already on the list
    bool found_student = false;
    for (const auto& student : m_map) {
        if (student.name == name) { // found the student
            return student.grade;
        }
    }
    
    // did not find the student
    StudentGrades new_student(name, '');
    m_map.push_back(new_student);
    return m_map.back();
}

