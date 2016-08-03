/*
 * Author:  Justin Nguyen
 * Created: 8/3/2016
 */
 
#ifndef STUDENT_GRADES_H
#define STUDENT_GRADES_H

#include <string>

class StudentGrades {
    private:
        std::string m_name = "";
        char m_grade = 'Z';
    public:
        StudentGrades() {}
        StudentGrades(std::string name, char grade) 
            : m_name(name), m_grade(grade) {}
};

#endif
