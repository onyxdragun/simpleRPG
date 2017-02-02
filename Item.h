#ifndef ITEMS_H
#define ITEMS_H

#include "defs.h"

class Item
{
    public:
        Item();
        ~Item();
        void setName(string str);
        string getName();
    private:
        string short_name;
        string description;

};


#endif
