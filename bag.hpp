/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Bag class, which is used to hold
 * the things that Cat Lady accumulates throughout the game.
*******************************************************************************/

#ifndef BAG_HPP
#define BAG_HPP

#include <string>

class Bag {

private:

    int money;
    bool tuna;

    //This invisible object is how the game will know whether Cat Lady has
    //visited Dog Man's house after collecting all of her cats.
    bool revenge;

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
    bool getRevenge();
    void setRevenge(bool);

};


#endif

