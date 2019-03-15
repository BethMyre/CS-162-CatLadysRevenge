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
            std::cout << "//Cat rescue scene here." << std::endl;
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



