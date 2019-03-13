/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "work.hpp"
#include "intValidate.hpp"

Work::Work (std::string name, Bag * baggie)
        : Space(name, baggie) {

}

Work::~Work() {

}

void Work::action() {
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1. Copy an easy sentence." << std::endl;
    std::cout << "2. Copy a hard sentence." << std::endl;
    std::cout << "3. Leave work." << std::endl;
    int selection = intValidate(1, 3);
    if (selection == 1) {
        easy();
    }
    else if (selection == 2) {
        hard();
    }
    else {

    }
}

void Work::easy() {
    std::cout << "Please type the following sentence exactly." << std::endl;
    //int sentence = rand() % 3;
    int sentence = 0;
    std::string input;
    switch(sentence){
        case 0: {
            std::cout << "Eos aocbl qibmzh fobb." << std::endl;
            std::getline(std::cin, input);
            if (input == "Eos aocbl qibmzh fobb.") {
                std::cout << "Excellent work.  You have earned $10." << std::endl;
                theBag->increaseMoney(10);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl;
            }
        }
        case 1: {

        }
        case 2: {

        }

    }
}

void Work::hard() {

}