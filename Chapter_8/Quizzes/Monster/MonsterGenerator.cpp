/*
 * Author:  Justin Nguyen
 * Created: 7/27/2016
 */
 
static MonsterGenerator::generateMonster() {
	static std::string s_names[6]
		{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };
	static std::string s_roars[6]
		{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*" }
	
	MonsterType type = MonsterType[getRandomNumber(0, MAX_MONSTER_TYPES - 1)];
	std::string name = s_names[getRandomNumber(0, 5)];
	std::string roar = s_roars[getRandomNumber(0, 5)];
	int hp = getRandomNumber(1, 100);
	
    return Monster(type, name, roar, hp);
}

/* Generate a random number between min and max (inclusive)
 * Assumes srand() has already been called */
static int MonsterGenerator::getRandomNumber(int min, int max) {
    // static used for efficiency, so we only calculate this value once
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
	
	
