/*
    Author:  Justin Nguyen
    Created: 6/5/2016
*/

#ifndef MONSTER_H
#define MONSTER_H

enum class Monster_t {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster {
	Monster_t type;
	string name;
	int health;
};

#endif 
