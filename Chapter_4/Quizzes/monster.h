/*
    Author:  Justin Nguyen
    Created: 6/5/2016
*/

#ifndef MONSTER_H
#define MONSTER_H

struct Monster {
	Monster_t type;
	string name;
	int health;
};

enum class Monster_t {
	string "ogre",
	string "dragon",
	string "orc",
	string "giant_spider",
	string "slime"
};

#endif 
