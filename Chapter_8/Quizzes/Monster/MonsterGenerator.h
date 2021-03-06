/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */
 
#ifndef MONSTER_GENERATOR_H
#define MONSTER_GENERATOR_H

#include <string>
#include "Monster.h"

class MonsterGenerator {
    public:
        static Monster generateMonster(); 
        static int getRandomNumber(int min, int max);
};

#endif
