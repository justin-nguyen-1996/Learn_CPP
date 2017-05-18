/*
    Author:  Justin Nguyen
    Created: 6/5/2016
*/

#ifndef MONSTER_H
#define MONSTER_H

#include <string>

enum class Monster_t {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster {
	Monster_t type;
	std::string name;
	int health;
};

#endif 
