
/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "street.hpp"
#include "intValidate.hpp"

Street::Street (std::string name, Bag * baggie)
        : Space(name, baggie) {

}

Street::~Street() {

}

void Street::action() {
    int selection = 0;
    std::cout << "You are now standing in the street." << std::endl;
    std::cout << "In order to get home, you need to walk through the park." << std::endl;
    while (selection != 1) {
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Walk towards the park." << std::endl;
        std::cout << "2. View map." << std::endl << std::endl;
        selection = intValidate(1, 2);
        if (selection == 2) {
            std::cout << "//Need to print map here." << std::endl;
        }
    }

}



