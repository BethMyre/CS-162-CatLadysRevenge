/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include "space.hpp"

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
