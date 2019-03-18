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
    snowballHere = 0;
}

Home::~Home() {

}

int Home::action() {
    int selection = 0;

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

}



