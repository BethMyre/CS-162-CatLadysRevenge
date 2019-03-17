/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "restaurant.hpp"
#include "intValidate.hpp"

Restaurant::Restaurant (Bag * baggie)
        : Space(baggie) {
    catHere = 1;
}

Restaurant::~Restaurant() {

}

int Restaurant::action() {
    int selection = 0;
    std::cout << "You enter the restaurant.  Every table is full of diners, laughing and eating." << std::endl;
    if (hereBefore == 0 && catHere == 1) {
        std::cout << "A waiter approaches you.  \"Table for one?\" he asks." << std::endl;
        std::cout << "As he is speaking, you see a small rodent run along the wall." << std::endl;
        std::cout << "A second later, a hairless cat dashes after it and catches it." << std::endl;
        std::cout << "And it's not just ANY hairless cat... It's your playful cat Wrinkles and Creases!" << std::endl;
        std::cout << "\"But sir!\" you say.  \"That's my cat!  Give him back to me!\"." << std::endl;
        std::cout << "The waiter shakes his head." << std::endl;
        std::cout << "\"Since that cat arrived earlier today, we've finally started to get "
        << "our mouse problem under control.\"" << std::endl;
        std::cout << "We would never let him go without an alternate mouse-catching plan." << std::endl << std::endl;
    }
    std::cout << std::endl;
    while (selection != 1) {
        std::cout << "What would you like to do?" << std::endl;
        if (theBag->getMousetraps() == 1) {
            std::cout << "1. Leave the restaurant." << std::endl;
            std::cout << "2. Try to get Snowball out of the tree." << std::endl;
            selection = intValidate(1, 2);
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
                    catHere = 0;
                }
            }
        }
        else {
            std::cout << "1. Leave the restaurant." << std::endl;
            selection = intValidate(1, 1);
        }
    }
    std::cout << "Where would you like to go?" << std::endl;
    if (hereBefore == 0) {
        std::cout << "1. Home." << std::endl;
        intValidate(1, 1);
        hereBefore = 1;
        return 2;
    }
    else {
        std::cout << "1. To the street." << std::endl;
        std::cout << "2. Home." << std::endl;
        std::cout << "3. To the restaurant." << std::endl;
        int choice = intValidate(1, 3);
        return choice;
    }
}




