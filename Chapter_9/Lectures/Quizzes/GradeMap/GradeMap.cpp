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
        if (student.name == name) {
            found_student = true;
            break;
        }
    }
    
    
}

