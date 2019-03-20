/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Home class, which is a child
 * class of the Space class.
*******************************************************************************/

#include <string>
#include <iostream>
#include "home.hpp"
#include "intValidate.hpp"

Home::Home (Bag * baggie)
        : Space(baggie) {
    catHere = 0;
}

Home::~Home() {

}

int Home::action() {
    int selection = 0;
    //This scene only happens the first time you go to your house.
    if (hereBefore == 0) {
        std::cout << "You walk towards your house... Oh no!" << std::endl;
        std::cout << "Someone has opened your front door and let your three indoor cats escape!" << std::endl;
        std::cout << "Judging by the giant paw prints all over your front lawn, it must have been Dog Man." << std::endl
            << std::endl;
        std::cout << "Quickly!  You must find all of your cats, bring them home," << std::endl;
        std::cout << "exact revenge on Dog Man, and be back in time for bed at 8:30." << std::endl << std::endl;
        std::cout << "You leave your house and go back to the park..." << std::endl;
        hereBefore = 1;
        return 3;
    }
    //If you don't have all of your cats yet
    else if (!theBag->getSnowball() || !theBag->getNibbles() || !theBag->getCreases()) {
        std::cout << "You realize that you shouldn't be home while any of your cats are" << std::endl;
        std::cout << "scared and alone out in the world, so you go back to the park." << std::endl;
        return 3;
    }
    //If you have all of your cats but haven't gotten revenge on Dog Man yet
    else if (!theBag->getRevenge()) {
        std::cout << "As happy as you are to have all of your cats back, you can't rest" << std::endl;
        std::cout << "until you've gotten some type of revenge on Dog Man." << std::endl;
        std::cout << "You turn around and go back to the park." << std::endl;
        return 3;
    }
    //If you have your cats and have gotten revenge, you win!
    else {
        return 5;
    }

}



