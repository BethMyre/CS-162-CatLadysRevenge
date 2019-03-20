/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the implementation file for the Street class, which is a child
 * class of the Space class.
*******************************************************************************/

#include <string>
#include <iostream>
#include "street.hpp"
#include "intValidate.hpp"

Street::Street (Bag * baggie)
        : Space(baggie) {
    catHere = 0;
}

Street::~Street() {

}

int Street::action() {
    int selection = 0;
    std::cout << "You are now standing in the street." << std::endl;
    std::cout << "In order to get home, you need to walk through the park." << std::endl;
    while (selection != 1) {
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Leave the street." << std::endl;
        std::cout << "2. View a map of town posted on a telephone pole." << std::endl;
        std::cout << "3. Look at the contents of your purse." << std::endl << std::endl;
        selection = intValidate(1, 3);
        if (selection == 1) {
            std::cout << "Where would you like to go?" << std::endl;
            //You just go straight home the first time you're passing through
            if (hereBefore == 0) {
                std::cout << "1. To the park." << std::endl;
                intValidate(1, 1);
                hereBefore = 1;
                return 4;
            }
            else{
                std::cout << "1. Back to work." << std::endl;
                std::cout << "2. To the store." << std::endl;
                std::cout << "3. To Dog Man's house." << std::endl;
                std::cout << "4. To the park." << std::endl;
                int choice = intValidate(1, 4);
                return choice;
            }
        }
        else if (selection == 2) {
            displayMap();
        }
        else if (selection == 3) {
            displayPurse(theBag);
        }
    }
}

void Street::displayMap() {
    std::cout << "                     **********************                     " << std::endl;
    std::cout << "                     *                    *                     " << std::endl;
    std::cout << "                     *     TRANSLATION    *                     " << std::endl;
    std::cout << "                     *      EMPORIUM      *                     " << std::endl;
    std::cout << "                     *                    *                     " << std::endl;
    std::cout << "******************************    ******************************" << std::endl;
    std::cout << "*                    *                    *                    *" << std::endl;
    std::cout << "*      DOG MAN'S             STREET                STORE       *" << std::endl;
    std::cout << "*        HOUSE                                                 *" << std::endl;
    std::cout << "*                    *                    *                    *" << std::endl;
    std::cout << "**********************                    **********************" << std::endl;
    std::cout << "*                    *                    *                    *" << std::endl;
    std::cout << "*      RESTAURANT             PARK              CAT LADY'S     *" << std::endl;
    std::cout << "*                                                 HOUSE        *" << std::endl;
    std::cout << "*                    *                    *                    *" << std::endl;
    std::cout << "****************************************************************" << std::endl;
}

void Street::displayPurse(Bag * baggie) {
    std::cout << std::endl << "Looking in your purse, you find:" << std::endl;
    //Money is always displayed, even if the amount is $0.
    std::cout << "$" << baggie->getMoney() << std::endl;
    //All other items are displayed only if they are in the purse
    if (baggie->getTuna()) {
        std::cout << "A can of tuna" << std::endl;
    }
    if (baggie->getSnowball()) {
        std::cout << "Snowball, your white cat" << std::endl;
    }
    if (baggie->getNibbles()) {
        std::cout << "Nibbles, your grey tortoiseshell cat" << std::endl;
    }
    if (baggie->getCreases()) {
        std::cout << "Creases, your hairless cat" << std::endl;
    }
    //Revenge is an invisible item and is not displayed.  It is just "held" in the bag so that
    //the DogMan object has an easy way to communicate with the Home object about whether the
    //game can be won.
    std::cout << std::endl;
}

