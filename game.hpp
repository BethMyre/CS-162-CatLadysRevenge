/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Game class.
*******************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include "space.hpp"
#include "work.hpp"
#include "street.hpp"
#include "park.hpp"
#include "home.hpp"
#include "restaurant.hpp"
#include "store.hpp"
#include "dogMan.hpp"
#include "bag.hpp"

class Game {

private:
    //Where cat lady is
    Space * playerPtr;

    //All of the spaces on the board
    Space * myHome;
    Space * myWork;
    Space * myDogMan;
    Space * myStreet;
    Space * myStore;
    Space * myRestaurant;
    Space * myPark;

    //Cat lady's bag
    Bag * myBag;

    //Int used to track time
    int theTime;

    Space * createBoard();
    void destroyBoard(Space * home);    //Should this be Space * &home ?
    void displayTime();
    void moveTop();
    void moveRight();
    void moveLeft();
    void moveBottom();

public:
    Game();
    void play();
    int start();
    int again();

};


#endif
