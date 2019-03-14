/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "work.hpp"
#include "intValidate.hpp"

Work::Work (Bag * baggie)
        : Space(baggie) {
    catHere = 0;
}

Work::~Work() {

}

int Work::action() {
    int selection = 0;
    while (selection != 1) {
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Leave work." << std::endl;
        std::cout << "2. Copy an easy sentence." << std::endl;
        std::cout << "3. Copy a hard sentence." << std::endl << std::endl;
        selection = intValidate(1, 3);
        if (selection == 1) {
            hereBefore = 1;
            return 4;
        }
        else if (selection == 2) {
            easy();
        }
        else if (selection == 3) {
            hard();
        }
    }
}

void Work::easy() {
    std::cout << "Please type the following sentence exactly." << std::endl;
    int sentence = rand() % 5;
    std::string input;
    switch(sentence){
        case 0: {
            std::cout << "Eos aocbl qibmzh fobb." << std::endl;
            std::getline(std::cin, input);
            if (input == "Eos aocbl qibmzh fobb.") {
                std::cout << "Excellent work.  You have earned $10." << std::endl;
                theBag->increaseMoney(10);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 1: {
            std::cout << "Yzri bmfdyu och." << std::endl;
            std::getline(std::cin, input);
            if (input == "Yzri bmfdyu och.") {
                std::cout << "Excellent work.  You have earned $10." << std::endl;
                theBag->increaseMoney(10);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 2: {
            std::cout << "Mzxgcy oai a j hn." << std::endl;
            std::getline(std::cin, input);
            if (input == "Mzxgcy oai a j hn.") {
                std::cout << "Excellent work.  You have earned $10." << std::endl;
                theBag->increaseMoney(10);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 3: {
            std::cout << "L karno magi." << std::endl;
            std::getline(std::cin, input);
            if (input == "L karno magi.") {
                std::cout << "Excellent work.  You have earned $10." << std::endl;
                theBag->increaseMoney(10);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 4: {
            std::cout << "Flqm g skzic." << std::endl;
            std::getline(std::cin, input);
            if (input == "Flqm g skzic.") {
                std::cout << "Excellent work.  You have earned $10." << std::endl;
                theBag->increaseMoney(10);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
    }
}

void Work::hard() {
    std::cout << "Please type the following sentence exactly." << std::endl;
    int sentence = rand() % 5;
    std::string input;
    switch(sentence){
        case 0: {
            std::cout << "(@* @& ^%." << std::endl;
            std::getline(std::cin, input);
            if (input == "(@* @& ^%.") {
                std::cout << "Excellent work.  You have earned $20." << std::endl;
                theBag->increaseMoney(20);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 1: {
            std::cout << "!#%*#( ^^." << std::endl;
            std::getline(std::cin, input);
            if (input == "!#%*#( ^^.") {
                std::cout << "Excellent work.  You have earned $20." << std::endl;
                theBag->increaseMoney(20);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 2: {
            std::cout << "^$ #&@ (&^@@." << std::endl;
            std::getline(std::cin, input);
            if (input == "^$ #&@ (&^@@.") {
                std::cout << "Excellent work.  You have earned $20." << std::endl;
                theBag->increaseMoney(20);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 3: {
            std::cout << "*&#@." << std::endl;
            std::getline(std::cin, input);
            if (input == "*&#@.") {
                std::cout << "Excellent work.  You have earned $20." << std::endl;
                theBag->increaseMoney(20);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
        case 4: {
            std::cout << "& ^ $ @#$." << std::endl;
            std::getline(std::cin, input);
            if (input == "& ^ $ @#$.") {
                std::cout << "Excellent work.  You have earned $20." << std::endl;
                theBag->increaseMoney(20);
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
    }
}