/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include "space.hpp"
#include "work.hpp"
#include "bag.hpp"

class Game {

private:
    //Where cat lady is
    Space * playerPtr;

    //All of the spaces on the board
    Space * myHome;
    Space * myWork;
    Space * myPetStore;
    Space * mySeniorCenter;
    Space * myStreet;
    Space * mySupplyStore;
    Space * myCasino;
    Space * myPark;
    Space * myFurnitureFactory;

    //Cat lady's bag
    Bag * myBag;

    Space * createBoard();
    void destroyBoard(Space * home);    //Should this be Space * &home ?
    void intro();
    void printMap();

public:
    Game();
    void play();
    int start();
    int again();

};


#endif
