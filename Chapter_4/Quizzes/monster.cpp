/*
    Author:  Justin Nguyen
    Created: 6/5/2016
*/

/*
    In designing a game, we decide we want to have monsters. 
    Declare a struct that represents your monster. 
    The monster should have a type that can be one of the following: 
        ogre, a dragon, an orc, a giant spider, or a slime 
    Use an enum class for this

    Each individual monster should also have a name and healthbar
    Write a function named printMonster() that prints the struct
    Instantiate an ogre and a slime and pass them to printMonster().

    Sample Output:
    This Ogre is named Torg and has 145 health.
    This Slime is named Blurp and has 23 health.
*/

#include <iostream>
#include "monster.h"
#include <string>

std::string getMonsterTypeString(Monster monster) {
	if (monster.type == Monster_t::OGRE) { return "Ogre"; }
	else if (monster.type == Monster_t::DRAGON) { return "Dragon"; }
	else if (monster.type == Monster_t::ORC) { return "Orc"; }
	else if (monster.type == Monster_t::SLIME) { return "Slime"; }
	else { return "Giant Spider"; }
}

void printMonster(Monster monster) {
	std::cout << "This " << getMonsterTypeString(monster) << 
		" is named " << monster.name << " and has " << 
		monster.health << " health" << "\n";
}

int main() {
	Monster Torg {Monster_t::OGRE, "Torg", 145};
	Monster Blurp {Monster_t::SLIME, "Blurp", 23};

	printMonster(Torg);
	printMonster(Blurp);

	return 0;
}
