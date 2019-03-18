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
    bool mousetraps;
    bool dog;

    //Cats
    bool snowball;
    bool nibbles;
    bool creases;

public:
    Bag();
    int getMoney();
    int changeMoney(int);
    bool getTuna();
    void setTuna(bool);
    bool getSnowball();
    void setSnowball(bool);
    bool getNibbles();
    void setNibbles(bool);
    bool getCreases();
    void setCreases(bool);

};


#endif

