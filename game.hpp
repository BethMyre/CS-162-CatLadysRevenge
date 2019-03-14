/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include "space.hpp"
#include "work.hpp"
#include "street.hpp"
#include "park.hpp"
#include "bag.hpp"

class Game {

private:
    //Where cat lady is
    Space * playerPtr;

    //All of the spaces on the board
    Space * myHome;
    Space * myWork;
    Space * mySeniorCenter;
    Space * myStreet;
    Space * myStore;
    Space * myCasino;
    Space * myPark;

    //Cat lady's bag
    Bag * myBag;

    //Int used to track time
    int theTime;

    Space * createBoard();
    void destroyBoard(Space * home);    //Should this be Space * &home ?
    void intro();
    void printMap();

public:
    Game();
    void play();
    int start();
    int again();
    void displayTime();
    void moveTop();
    void moveRight();
    void moveLeft();
    void moveBottom();

};


#endif
