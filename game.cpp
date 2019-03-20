/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the implementation file for the game class.
*******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include "game.hpp"
#include "intValidate.hpp"
#include "space.hpp"
#include "bag.hpp"

Game::Game() {
    playerPtr = nullptr;
    myHome = nullptr;
    myWork = nullptr;
    myDogMan = nullptr;
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

    //The user will start at work, so createBoard() returns a pointer to the Work space.
    playerPtr = createBoard();
    int selection = 0;
    while (theTime <= 180 && selection != 5) {
        //The action method returns the direction that the player is moving when leaving
        //a particular space.
        selection = playerPtr->action();
        //The time is displayed after each movement.
        if (selection != 5 {
            displayTime();
        }
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
    if (theTime > 180) {
        std::cout << std::endl << "Oh no!  It's past your bedtime!" << std::endl;
        std::cout << "YOU LOSE.  :(" << std::endl << std::endl;
    }
    else {
        std::cout << "You did it! You're in bed with all of your cats by your bedtime!" << std::endl;
        std::cout << "YOU WIN!  :)" << std::endl << std::endl;
    }

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
    myDogMan = new DogMan(myBag);
    myStreet = new Street(myBag);
    myStore = new Store(myBag);
    myRestaurant = new Restaurant(myBag);
    myPark = new Park(myBag);

    //Make spaces point to each other
    //Anything not set here will stay pointed to nullptr
    myWork->setBottom(myStreet);
    myDogMan->setRight(myStreet);
    myStreet->setLeft(myDogMan);
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
    delete myDogMan;
    delete myStreet;
    delete myStore;
    delete myRestaurant;
    delete myPark;
}

void Game::displayTime() {
    std::cout << std::endl << "The time is now " << 5 + theTime/60 << ":" << std::setw(2) << std::setfill('0')
        << theTime%60 << "." << std::endl << std::endl;
}

//Time is incremented by 5 minutes in each of the move functions.
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
