#ifndef MONSTER_H
#define MONSTER_H

#include <string>
#include <iostream>

#include "Player.h"

class Monster
{

    public:
        Monster();
        Monster(const Player *pPlayer);
        ~Monster();
        void setName(std::string name);
        std::string getName();
        void setLevel(int lvl);
        int getLevel();
        std::string getStatus();
        void setMaxHP(int hp);
        int getMaxHP();
        void setHealth(int hp);
        int getHealth();
    private:
        int iLevel;
        int iHealth;
        int iMaxHP;
        int iStrength;
        std::string sName;

};



#endif
