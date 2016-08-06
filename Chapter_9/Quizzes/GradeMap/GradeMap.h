/*
 * Author:  Justin Nguyen
 * Created: 8/3/2016
 */
 
#ifndef GRADE_MAP_H
#define GRADE_MAP_H

#include <vector>
#include "StudentGrades.h"

class GradeMap {
    private:
        std::vector<StudentGrades> m_map;
    public:
        GradeMap() {}
        char& operator[] (const std::string& name);
};

#endif
