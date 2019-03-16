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

    //Cats
    bool snowball;

public:
    Bag();
    int getMoney();
    void increaseMoney(int);
    void decreaseMoney(int);
    bool getTuna();
    void setTuna(bool);
    bool getSnowball();
    void setSnowball(bool);

};


#endif

