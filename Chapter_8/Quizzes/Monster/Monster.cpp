/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */
 
#include <iostream>
#include <string>
#include "Monster.h"

Monster::print() const {
    std::string m_type_string = getTypeString(m_type);
    std::cout << m_name << "the " << m_type_string << " has "
              << m_hp << " hitpoints and says " << m_roar << "\n";
}
 
int main() {
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    
    Monster m = MonsterGenerator();
    m.print();
}

