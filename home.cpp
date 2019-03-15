/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "home.hpp"
#include "intValidate.hpp"

Home::Home (Bag * baggie)
        : Space(baggie) {
    catHere = 0;        //This variable is not used for Home. Instead, indiv cat variables.
    doorknobPresent = 0;
    snowballHere = 0;
}

Home::~Home() {

}

int Home::action() {
    int selection = 0;

    if (hereBefore == 0) {
        std::cout << "You walk towards your house.  Something looks strange..." << std::endl;
        std::cout << "Your one-of-a-kind doorknob shaped like an orange cat's head has been stolen" << std::endl;
        std::cout << "and the wind was able to open the door!" << std::endl;
        std::cout << "Fearing what you'll find, you step inside the house." << std::endl;
        std::cout << "\"Krrrrrrp tch tch tch tch tch. Meow.\" you call to your cats." << std::endl;
        std::cout << "There is nothing but silence.  All four of your indoor cats have wandered outside!" << std::endl;
        std::cout << "Quickly!  You must find all of your cats, bring them home," << std::endl;
        std::cout << "exact revenge on the person who stole the doorknob," << std::endl;
        std::cout << "and be back in time for Wheel of Fortune at 7:00." << std::endl;
        std::cout << "You step back outside of your house." << std::endl;
        hereBefore = 1;
        return 3;
    }

}



