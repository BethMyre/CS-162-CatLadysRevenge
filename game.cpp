/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <iostream>
#include <string>
#include "game.hpp"
#include "intValidate.hpp"
#include "space.hpp"

Game::Game() {
    playerPtr = nullptr;
    myHome = nullptr;
    myWork = nullptr;
    myPetStore = nullptr;
    mySeniorCenter = nullptr;
    myStreet = nullptr;
    mySupplyStore = nullptr;
    myCasino = nullptr;
    myPark = nullptr;
    myFurnitureFactory = nullptr;
}

void Game::play(){
    playerPtr = createBoard();
    std::cout <<"***************************************" << std::endl;
    std::cout <<"          CAT LADY'S REVENGE" << std::endl;
    std::cout <<"***************************************" << std::endl;
    std::cout << std::endl << std::endl << std::endl << std::endl << std:: endl;

    destroyBoard(myHome);
}

int Game::start(){
    std::cout << "Would you like to play Cat Lady's Revenge?  (Please say yes.)" << std::endl;
    std::cout << "1. Yes" << std::endl;
    std::cout << "2. No" << std::endl << std::endl;
    int selection = intValidate(1, 2);
    return selection;
}

int Game::again(){
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1. Play again" << std::endl;
    std::cout << "2. Exit the game" << std::endl << std::endl;
    int selection = intValidate(1, 2);
    return selection;
}

Space * Game::createBoard(){
    //Dynamically allocate spaces
    myHome = new Space("home");
    myWork = new Space("work");
    myPetStore = new Space("pet store");
    mySeniorCenter = new Space("senior center");
    myStreet = new Space("street");
    mySupplyStore = new Space("supply store");
    myCasino = new Space("casino");
    myPark = new Space("park");
    myFurnitureFactory = new Space("furniture factory");

    //Make spaces point to each other
    myFurnitureFactory->setRight(myWork);
    myWork->setLeft(myFurnitureFactory);
    myWork->setBottom(myStreet);
    myPetStore->setBottom(mySupplyStore);
    mySeniorCenter->setRight(myStreet);
    myStreet->setLeft(mySeniorCenter);
    myStreet->setTop(myWork);
    myStreet->setRight(mySupplyStore);
    myStreet->setBottom(myPark);
    myCasino->setRight(myPark);
    myPark->setLeft(myCasino);
    myPark->setTop(myStreet);
    myPark->setRight(myHome);
    myHome->setLeft(myPark);

    return myWork;
}

void Game::destroyBoard(Space * home){
    delete myHome;
    delete myWork;
    delete myPetStore;
    delete mySeniorCenter;
    delete myStreet;
    delete mySupplyStore;
    delete myCasino;
    delete myPark;
    delete myFurnitureFactory;
}

void Game::printMap(){

}






