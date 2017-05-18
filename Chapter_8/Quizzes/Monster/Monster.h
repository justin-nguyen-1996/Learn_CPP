/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */

#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
	public:
        enum MonsterType {
            Dragon,
            Goblin,
            Ogre,
            Orc,
            Skeleton,
            Troll,
            Vampire,
            Zombie,
            MAX_MONSTER_TYPES,
            NO_TYPE
        };

    private:
        MonsterType m_type = MonsterType::NO_TYPE;
        std::string m_name = "";
        std::string m_roar = "";
        int m_hp = 0;

    public:

        Monster() {}
        Monster(MonsterType type, std::string name, std::string roar, int hp)
            : m_type(type), m_name(name), m_roar(roar), m_hp(hp) {}

        void print() const;
        std::string getTypeString() const;
};

#endif
