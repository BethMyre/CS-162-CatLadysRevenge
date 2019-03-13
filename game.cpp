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
#include "bag.hpp"

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
    myBag = new Bag;
}

void Game::play(){
    playerPtr = createBoard();
    intro();
    playerPtr->action();

    destroyBoard(myHome);
}

int Game::start(){
    std::cout << std::endl << std::endl;
    std::cout << "Would you like to play Cat Lady's Revenge?  (Please say yes.)" << std::endl;
    std::cout << "1. Yes" << std::endl;
    std::cout << "2. No" << std::endl << std::endl;
    int selection = intValidate(1, 2);
    return selection;
}

void Game::intro(){
    std::cout <<"***************************************" << std::endl;
    std::cout <<"          CAT LADY'S REVENGE" << std::endl;
    std::cout <<"***************************************" << std::endl << std::endl;
    std::cout << "You're a nice cat lady, enjoying the simple life." << std::endl;
    std::cout << "You just have a little more work to finish up "
              << "before you can go home to your cats." << std::endl << std::endl;
    std::cout << "You work at a translation company copying words you don't understand." << std::endl;
    std::cout << "You earn $10 for every sentence that you type correctly." << std::endl;
    std::cout << "If the language is particularly difficult, you earn $20 per sentence." << std::endl << std::endl;
    std::cout << "Before you leave today you would like to earn at least $50." << std::endl << std::endl;
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
    myHome = new Space("home", myBag);
    myWork = new Work("work1", myBag);
    myPetStore = new Space("pet store", myBag);
    mySeniorCenter = new Space("senior center", myBag);
    myStreet = new Space("street", myBag);
    mySupplyStore = new Space("supply store", myBag);
    myCasino = new Space("casino", myBag);
    myPark = new Space("park", myBag);
    myFurnitureFactory = new Space("furniture factory", myBag);

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






