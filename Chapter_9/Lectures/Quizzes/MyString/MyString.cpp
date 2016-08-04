/*
 * Author:  Justin Nguyen
 * Created: 8/04/16
 */
 
#include <string>
#include "MyString.h"

std::string MyString::operator() (int start_i, int num_chars) {
    std::string res = "";
    while (num_chars > 0) {
        res += m_string[start_i];
        start_i += 1;
        num_chars -= 1;
    }
    
    return res;
}
