/*
 * Author:  Justin Nguyen
 * Created: 8/04/16
 */
 
#ifndef MY_STRING_H
#define MY_STRING_H

#include <string>

class MyString {
    private:
        std::string m_string;
    public:
        std::string operator() (int start_i, int num_chars);
};

#endif
