/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */
 
#include <iostream>
#include <string>
#include "Monster.h"

void Monster::print() const {
    std::string m_type_string = getTypeString(m_type);
    std::cout << m_name << "the " << m_type_string << " has "
              << m_hp << " hitpoints and says " << m_roar << "\n";
}

std::string Monster::getTypeString() const {
    switch (m_type) {
        case Dragon:     return "Dragon";
        case Goblin:     return "Goblin";
        case Ogre:       return "Ogre";
        case Orc:        return "Orc";
        case Skeleton:   return "Skeleton";
        case Troll:      return "Troll";
        case Vampire:    return "Vampire";
        case Zombie:     return "Zombie";
        case NO_TYPE:    return "NO_TYPE";
        default:    	 return "NO_TYPE";
    }
}
 
int main() {
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    
    Monster m = MonsterGenerator();
    m.print();
}

