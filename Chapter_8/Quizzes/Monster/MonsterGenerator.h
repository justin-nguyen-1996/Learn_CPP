/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */
 
#ifndef MONSTER_GENERATOR_H
#define MONSTER_GENERATOR_H

#include <string>

class MonsterGenerator {
    public:
        static Monster generateMonster();
        static std::string getTypeString(MonsterType type);
};

#endif
