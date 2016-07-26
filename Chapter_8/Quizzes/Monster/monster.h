/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */
 
#ifndef MONSTER_H
#define MONSTER_H

#include <string>

enum class MonsterType {
    Dragon, 
    Goblin, 
    Ogre, 
    Orc, 
    Skeleton, 
    Troll, 
    Vampire, 
    Zombie
}

class Monster {
    MonsterType monster_type;
    std::string name;
    std::string roar;
    int hp;
};

#endif
