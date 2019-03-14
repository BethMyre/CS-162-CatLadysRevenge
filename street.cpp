
/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "street.hpp"
#include "intValidate.hpp"

Street::Street (Bag * baggie)
        : Space(baggie) {

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
        std::cout << "2. View map." << std::endl << std::endl;
        selection = intValidate(1, 2);
        if (selection == 1) {
            std::cout << "Where would you like to go?" << std::endl;
            if (hereBefore == 0) {
                std::cout << "1. To the park." << std::endl;
                intValidate(1, 1);
                hereBefore = 1;
                return 4;
            }
            else{
                std::cout << "1. Back to work." << std::endl;
                std::cout << "2. To the supply store." << std::endl;
                std::cout << "3. To the senior center." << std::endl;
                std::cout << "4. To the park." << std::endl;
                int choice = intValidate(1, 4);
                return choice;
            }
        }
        else if (selection == 2) {
            std::cout << "//Need to print map here." << std::endl;
        }
    }
}



