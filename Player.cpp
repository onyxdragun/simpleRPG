#include "Player.h"

using namespace std;

Player::Player()
{
    Player::setName("Unnamed");
    setLevel(1);
    setMaxHP(100);
    setHealth(100);
    //setExperience(0);

    cout << "Creating a Player()" << endl;
}
Player::~Player()
{
    cout << "Destroying a Player(" << Player::getName() << ")" << endl;
}

void Player::setName(string name)
{
    Player::sName = name;
}

string Player::getName() const
{
    return sName;
}

void Player::setLevel(int lvl)
{
    iLevel = lvl;
}

int Player::getLevel()const
{
   return iLevel;
}

void Player::setMaxHP(int hp)
{
    iMaxHP = hp;
}

int Player::getMaxHP() const
{
    return iMaxHP;
}

int Player::getHealth() const
{
    return iHealth;
}

void Player::setHealth(int hp)
{
    iHealth = hp;
}

void Player::addExp(int exp)
{
    iExperience += exp;
}

int Player::getExperience()
{
    return iExperience;
}
