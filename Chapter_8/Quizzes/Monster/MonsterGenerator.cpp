/*
 * Author:  Justin Nguyen
 * Created: 7/27/2016
 */
 
static MonsterGenerator::generateMonster() {
    return Monster(Monster::Skeleton, "Bones", "rattle", 4);
}

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
static int MonsterGenerator::getRandomNumber(int min, int max) {
    
    // static used for efficiency, so we only calculate this value once
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
	
	
