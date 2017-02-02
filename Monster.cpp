#include "defs.h"
#include "Monster.h"

#include <cstdlib>
#include <ctime>

using namespace std;

Monster::Monster()
{
    // Generate a random monster
    // Perhaps base the stats on the Player's stats
}

Monster::Monster(const Player *pPlayer)
{
    int rNum = 0;

    string monNames[4] = {"Mouse", "Wolf", "Bear", "Dragon"};
    
    srand(time(0));
    rNum = rand() % 4;
    setName(monNames[rNum]);
    setLevel(pPlayer->getLevel());
    // have to figure out level and HP maxes
    setMaxHP(getLevel() * 100);
    setHealth(getMaxHP());
    cout << "A " << getName() << " suddenly appears!" << endl;
    
}

Monster::~Monster()
{
    cout << "The corpse of " << getName() << " fades away." << endl;
}

void Monster::setName(string name)
{
    sName = name;
}
string Monster::getName()
{
    return sName;
}

void Monster::setLevel(int lvl)
{
    iLevel = lvl;
}

int Monster::getLevel()
{
    return iLevel;
}

string Monster::getStatus()
{

    string sHealth;
    int iHP = getHealth();
    int iMaxHP = getMaxHP();

    if (iHP >= (iMaxHP * 0.8))
    {
        sHealth = "\033[0;32mGood Shape\033[0m";
    }
    else if (iHP <= (iMaxHP * 0.79) && iHP >= (iMaxHP * 0.4))
    { 
        sHealth =  "\033[0;33mHurt\033[0m";
    }
    else
    {
        sHealth = "\033[0;31mAlmost Dead\033[0m";
    }
    return "[" + sHealth + "]";
}

int Monster::getHealth()
{
    return iHealth;
}
int Monster::getMaxHP()
{
    return iMaxHP;
}
void Monster::setHealth(int hp)
{
    iHealth = hp;
}
void Monster::setMaxHP(int hp)
{
    iMaxHP = hp;
}
