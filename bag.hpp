/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef BAG_HPP
#define BAG_HPP

#include <string>

class Bag {

private:

    int money;

public:
    Bag();
    int getMoney();
    void increaseMoney(int);
    void decreaseMoney(int);

};


#endif

