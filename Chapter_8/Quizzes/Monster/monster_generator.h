/*
 * Author:  Justin Nguyen
 * Created: 7/26/2016
 */
 
#ifndef MONSTER_GENERATOR_H
#define MONSTER_GENERATOR_H

class Monster_Generator {
    public:
        static Monster generateMonster() {
            return Monster(Monster::Skeleton, "Bones", "rattle", 4);
        }
};

#endif
