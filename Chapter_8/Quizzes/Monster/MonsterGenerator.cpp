/*
 * Author:  Justin Nguyen
 * Created: 7/27/2016
 */

#include <iostream>
#include "MonsterGenerator.h"

Monster MonsterGenerator::generateMonster() {
	// only initialize these arrays once
	static std::string s_names[6]
		{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };
	static std::string s_roars[6]
		{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*" };

	// randomize the Monster type, name, roar, and health
	int random_type_num = getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1);
	Monster::MonsterType type
		= static_cast<Monster::MonsterType>(random_type_num);
	int random_name_num = getRandomNumber(0, 5);
	std::string name = s_names[random_name_num];
	int random_roar_num = getRandomNumber(0, 5);
	std::string roar = s_roars[random_roar_num];
	int hp = getRandomNumber(1, 100);

    return Monster(type, name, roar, hp);
}

/* Generate a random number between min and max (inclusive)
 * Assumes srand() has already been called */
int MonsterGenerator::getRandomNumber(int min, int max) {
    // static used for efficiency, so we only calculate this value once
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}


