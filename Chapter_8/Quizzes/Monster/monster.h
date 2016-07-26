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
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hp;
};

#endif
