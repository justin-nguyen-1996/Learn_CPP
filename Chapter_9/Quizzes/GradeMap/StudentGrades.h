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
        StudentGrades(const std::string name, const char grade) 
            : m_name(name), m_grade(grade) {}

		std::string getName() const { return m_name; }
		char& getGrade() { return m_grade; }
		void setName(const std::string& name) { m_name = name; }
};

#endif
