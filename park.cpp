/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "park.hpp"
#include "intValidate.hpp"

Park::Park (Bag * baggie)
        : Space(baggie) {
    catHere = 1;
}

Park::~Park() {

}

int Park::action() {
    int selection = 0;
    std::cout << "You are now standing in the park." << std::endl;
    if (hereBefore == 1 && catHere == 1) {
        std::cout << "You see a white cat in a tree.  It's your sweet Snowball!" << std::endl;
    }
    std::cout << std::endl;
    while (selection != 1) {
        std::cout << "What would you like to do?" << std::endl;
        if (hereBefore == 0 || (hereBefore == 1 && catHere == 0)) {
            std::cout << "1. Leave the park." << std::endl;
            selection = intValidate(1, 1);
        }
        else if (hereBefore == 1 && catHere == 1) {
            std::cout << "1. Leave the park." << std::endl;
            std::cout << "2. Try to get Snowball out of the tree." << std::endl;
            selection = intValidate(1, 2);
        }
        if (selection == 2) {
            std::cout << "You approach the tree.  Snowball climbs even higher, clearly terrified." << std::endl;
            std::cout << "\"Here kitty kitty!\" you call." << std::endl;
            if (theBag->getTuna() == 0) {
                std::cout << "She doesn't move.  "
                    << "If only you had some way to tempt her to come down." << std::endl << std::endl;
            }
            else {
                std::cout << "You can tell Snowball needs extra encouragement, so you take the can " << std::endl;
                std::cout << "of tuna out of your purse and open it.  Snowball slowly climbs down the tree." << std::endl;
                std::cout << "You let her eat it, then scoop her up and put her into your purse." << std::endl << std::endl;
                theBag->setTuna(0);
                theBag->setSnowball(1);
            }
        }

    }
    std::cout << "Where would you like to go?" << std::endl;
    if (hereBefore == 0) {
        std::cout << "1. Home." << std::endl;
        intValidate(1, 1);
        hereBefore = 1;
        return 2;
    }
    else{
        std::cout << "1. To the street." << std::endl;
        std::cout << "2. Home." << std::endl;
        std::cout << "3. To the casino." << std::endl;
        int choice = intValidate(1, 3);
        return choice;
    }
}



