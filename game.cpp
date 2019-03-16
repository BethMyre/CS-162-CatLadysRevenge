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
    mySeniorCenter = nullptr;
    myStreet = nullptr;
    myStore = nullptr;
    myRestaurant = nullptr;
    myPark = nullptr;
    myBag = nullptr;
    theTime = 0;
}

void Game::play(){
    theTime = 0;
    myBag = new Bag;
    playerPtr = createBoard();
    intro();
    int selection = 0;
    while (theTime <= 180) {
        selection = playerPtr->action();
        displayTime();
        if (selection == 1){
            moveTop();
        }
        else if (selection == 2) {
            moveRight();
        }
        else if (selection == 3) {
            moveLeft();
        }
        else if (selection == 4){
            moveBottom();
        }
    }

    std::cout << "Now we're back in Game::play" << std::endl;
    displayTime();
    theTime += 10;
    displayTime();
    destroyBoard(myHome);
    delete myBag;
}

int Game::start(){
    std::cout << std::endl << std::endl;
    std::cout << "Would you like to play Cat Lady's Revenge?" << std::endl;
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
    std::cout << "You just have a little more work to finish up before you can go home to your cats." << std::endl;
    std::cout << "If you're cuddled up on the couch with all of your cats by 8:00 pm in time to " << std::endl;
    std::cout << "watch Wheel of Fortune, you'll be winning at life (and this game)." << std::endl << std::endl;
    std::cout << "You work at a translation company copying words you don't understand." << std::endl;
    std::cout << "You earn $10 for every sentence that you type correctly." << std::endl;
    std::cout << "If the language is particularly difficult, you earn $20 per sentence." << std::endl << std::endl;
    std::cout << "Before you leave today you'd like to earn at least $50." << std::endl << std::endl;
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
    myHome = new Home(myBag);
    myWork = new Work(myBag);
    mySeniorCenter = new Space(myBag);
    myStreet = new Street(myBag);
    myStore = new Space(myBag);
    myRestaurant = new Space(myBag);
    myPark = new Park(myBag);

    //Make spaces point to each other
    myWork->setBottom(myStreet);
    mySeniorCenter->setRight(myStreet);
    myStreet->setLeft(mySeniorCenter);
    myStreet->setTop(myWork);
    myStreet->setRight(myStore);
    myStreet->setBottom(myPark);
    myStore->setLeft(myStreet);
    myRestaurant->setRight(myPark);
    myPark->setLeft(myRestaurant);
    myPark->setTop(myStreet);
    myPark->setRight(myHome);
    myHome->setLeft(myPark);

    return myWork;
}

void Game::destroyBoard(Space * home){
    delete myHome;
    delete myWork;
    delete mySeniorCenter;
    delete myStreet;
    delete myStore;
    delete myRestaurant;
    delete myPark;
}

void Game::printMap(){

}

void Game::displayTime() {
    //Need to make minutes alway be 2 digits wide
    std::cout << std::endl << "The time is now " << 5 + theTime/60 << ":" << theTime%60
        << "." << std::endl << std::endl;
}

void Game::moveTop() {
    theTime += 5;
    playerPtr = playerPtr->getTop();
}

void Game::moveRight() {
    theTime += 5;
    playerPtr = playerPtr->getRight();
}

void Game::moveLeft() {
    theTime += 5;
    playerPtr = playerPtr->getLeft();
}

void Game::moveBottom() {
    theTime += 5;
    playerPtr = playerPtr->getBottom();
}