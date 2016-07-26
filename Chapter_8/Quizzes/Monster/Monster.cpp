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
    Monster skeleton(MonsterType::Skeleton, "Bones", "rattle", 4);
    Monster m = MonsterGenerator();
}

