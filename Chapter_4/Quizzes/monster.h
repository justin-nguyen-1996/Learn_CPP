/*
    Author:  Justin Nguyen
    Created: 6/5/2016
*/

#ifndef MONSTER_H
#define MONSTER_H

struct Monster {
	string name;
	int health;
};

enum class Monster_t {
	Monster ogre,
	Monster dragon,
	Monster orc,
	Monster giant_spider,
	Monster slime
};

#endif 
