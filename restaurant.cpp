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
    if (catHere == 1) {
        std::cout << "As you walk into the restaurant, you see a claw arcade game full of stuffed animals." << std::endl;
        std::cout << "There is movement in the machine.  It's Nibbles, your grey tortoiseshell cat!" << std::endl;
        std::cout << "On the machine is a sign which reads \"$5 per attempt. 1 in 8 chance of winning.\"" << std::endl;
        std::cout << "You make eye contact with Nibbles.  She's clearly thinking the same thing you are." << std::endl;
        std::cout << "If you play the game, she'll try to position herself so that the claw picks her up."
            << std::endl << std::endl;
    }
    else {
        std::cout << "Since you've already rescued Nibbles, there's nothing for you to do here."
            << std::endl << std::endl;
    }
    while (selection != 1) {
        std::cout << "What would you like to do?" << std::endl;
        if (catHere == 1) {
            std::cout << "1. Leave the restaurant." << std::endl;
            std::cout << "2. Play the claw game for $5." << std::endl;
            selection = intValidate(1, 2);
            if (selection == 2) {
                if (theBag->getMoney() >= 5){
                    int num = rand()%8;
                    if (num == 0) {
                        std::cout << "The claw gently picks up Nibbles and drops her into the chute. :)" << std::endl;
                        std::cout << "You put her in your purse." << std::endl;
                        theBag->setNibbles(1);
                        catHere = 0;
                    }
                    else {
                        std::cout << "The claw comes up empty. :(" << std::endl;
                    }
                    theBag->changeMoney(-5);
                    std::cout << "You have $" << theBag->getMoney() << " remaining." << std::endl << std::endl;
                }
                else {
                    std::cout << "You do not have enough money to play." << std::endl << std::endl;
                }
            }
        }
        else {
            std::cout << "1. Leave the restaurant." << std::endl;
            selection = intValidate(1, 1);
        }
    }
    std::cout << "You turn around and leave." << std::endl << std::endl;
    return 2;
}




