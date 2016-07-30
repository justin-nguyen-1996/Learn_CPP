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
            NO_TYPE
        };

    private:
        MonsterType m_type = MonsterType::NO_TYPE;
        std::string m_name = "";
        std::string m_roar = "";
        int m_hp = 0;

        std::string getTypeString() const {
            switch (m_type) {
                case Dragon:     return "Dragon";
                case Goblin:     return "Goblin";
                case Ogre:       return "Ogre";
                case Orc:        return "Orc";
                case Skeleton:   return "Skeleton";
                case Troll:      return "Troll";
                case Vampire:    return "Vampire";
                case Zombie:     return "Zombie";
                case NO_TYPE:    return "NO_TYPE";
                default:    	 return "NO_TYPE";
            }
        }

    public:

        Monster() {}
        Monster(MonsterType type, std::string name, std::string roar, int hp)
            : m_type(type), m_name(name), m_roar(roar), m_hp(hp) {}

        void print() const;
};

#endif
