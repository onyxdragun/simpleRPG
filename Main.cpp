#include "defs.h"
#include "Item.h"
#include "Player.h"
#include "Monster.h"

std::string getStatus(Player *player);
void attackMonster(Monster *monster, Player *player, bool &isMonsterPresent);

int main()
{
    //Item item;
    string sName;
    string sInput;
    int iChoice = 0;
    bool isMonsterPresent = false;
    Monster *monster;

    /*cout << "Hello World" << endl;
    cout << "The item: " << item.getName() << endl;
    item.setName("A box");
    cout << "You have an Item called " << item.getName() << endl;
    */
    Player *player = new Player();
    cout << "Welcome to Adventure Land!\r\n" << endl;
    cout << "Please enter your name: ";
    getline(cin, sName);
    player->setName(sName);
    cout << player->getName() << " has arrived!" << endl;
    
    do
    {
        cout << "\r\nPick your choice: " << endl;
        cout << "0) Exit " << endl;
        if(isMonsterPresent)
        {
           cout << "1) Attack " << monster->getName() << " " << monster->getStatus() << endl;
        }
        else
        {
            cout << "1) Fight a Monster" << endl;
        }
        cout << getStatus(player);
        cin >> sInput;
        iChoice = atoi(sInput.c_str());

        switch(iChoice)
        {
            case 0:
                cout << "You decide to go back to reality." << endl;
                break;
            case 1:
            {
                if(!isMonsterPresent)
                {
                    monster = new Monster(player);
                    isMonsterPresent = true;
                }
                else
                {
                    attackMonster(monster, player, isMonsterPresent);
                    if(!isMonsterPresent)
                    {
                        delete monster;
                    }
                }
                break;
            }
            default:
                cout << "Your choice is invalid." << endl;
                break;

        }
    } while(iChoice != 0);
    
    return 0;
}

string getStatus(Player *player)
{
    stringstream ss;
    int hp = player->getHealth();
    int maxHP = player->getMaxHP();
    ss << "\r\nHP: " << std::setw(3) << hp << "[" << std::setw(3) << maxHP << "] > ";

    return ss.str();
}

void attackMonster(Monster *monster, Player *player, bool &isMonsterPresent)
{
    bool isPlayerDead = false;
    int iDamage = 0;
    srand(time(0));
    iDamage = (rand() % 11);
    if (iDamage == 0)
    {
        cout << "You swing at " << monster->getName() << " and miss!" << endl;
    }
    else
    {
        cout << "You hack at " << monster->getName() << " and hit for " << iDamage << " " << endl;
        monster->setHealth(monster->getHealth() - iDamage);
    }
    if (monster->getHealth() <= 0)
    {
        cout << "You killed " << monster->getName() << "!" << endl;
        player->addExp(50);
        isMonsterPresent = false;
        
    }



}
