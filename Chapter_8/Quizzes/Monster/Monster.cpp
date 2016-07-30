/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */

#include <iostream>
#include <string>
#include "Monster.h"
#include "MonsterGenerator.h"

void Monster::print() const {
    std::string m_type_string = getTypeString();
    std::cout << m_name << " the " << m_type_string << " has "
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
// int MonsterGenerator::getRandomNumber(int min, int max) {
    // static used for efficiency, so we only calculate this value once
// 	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// evenly distribute the random number across our range
// 	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
// }
// Monster MonsterGenerator::generateMonster() {
	// only initialize these arrays once
// 	static std::string s_names[6]
// 		{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };
// 	static std::string s_roars[6]
// 		{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*" };
//
	// randomize the Monster type, name, roar, and health
// 	int random_type_num = getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1);
// 	Monster::MonsterType type
// 		= static_cast<Monster::MonsterType>(random_type_num);
// 	int random_name_num = getRandomNumber(0, 5);
// 	std::string name = s_names[random_name_num];
// 	int random_roar_num = getRandomNumber(0, 5);
// 	std::string roar = s_roars[random_roar_num];
// 	int hp = getRandomNumber(1, 100);
//
//     return Monster(type, name, roar, hp);
// }

int main() {
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock

    Monster m = MonsterGenerator::generateMonster();
    m.print();
    std::cout << MonsterGenerator::getRandomNumber(0,2) << "\n";
}

