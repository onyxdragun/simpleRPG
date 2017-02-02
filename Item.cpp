#include "Item.h"

Item::Item()
{
    setName("Empty");
    cout << "Creating an Item()" << endl;
}

Item::~Item()
{
    cout << "Destroying an Item[" << getName() << "]" << endl;
}

void Item::setName(string str)
{
    Item::short_name = str;
}

string Item::getName()
{
    return Item::short_name;
}

