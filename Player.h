#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <sstream>
#include "defs.h"

class Player
{
    public:

        Player();
        ~Player();

        std::string getName() const;
        void setName(std::string);
        int getLevel() const;
        void setLevel(int lvl);
        int getHealth() const;
        void setHealth(int hp);
        int getMaxHP() const;
        void setMaxHP(int hp);
        void addExp(int exp);
        int getExperience();
    private:
        std::string sName;
        std::string sRace;
        int iHealth;
        int iMaxHP;
        int iLevel;
        int iExperience;
        int iStrength;
};


#endif
