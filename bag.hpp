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
    bool tuna;

public:
    Bag();
    int getMoney();
    void increaseMoney(int);
    void decreaseMoney(int);
    bool getTuna();
    void setTuna(bool);

};


#endif

