/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the implementation file for the Work class, which is a child
 * class of the Space class.
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
    //Intro scene, shown only at the beginning of the game.
    if (hereBefore == 0) {
        std::cout <<"***************************************" << std::endl;
        std::cout <<"          CAT LADY'S REVENGE" << std::endl;
        std::cout <<"***************************************" << std::endl << std::endl;
        std::cout << "You're a nice cat lady, enjoying the simple life." << std::endl;
        std::cout << "You just have a little more work to finish up before you can go home to your cats." << std::endl;
        std::cout << "If you're cuddled up in bed with your cats by 8:30, you'll be winning at life (and this game)."
            << std::endl << std::endl;
        std::cout << "You work at a translation company copying words you don't understand." << std::endl;
        std::cout << "You earn $10 for every sentence that you type correctly." << std::endl;
        std::cout << "If the language is particularly difficult, you earn $20 per sentence." << std::endl << std::endl;
        std::cout << "Before you leave today you'd like to earn at little more money." << std::endl;
        std::cout << "You never know what you'll need it for." << std::endl << std::endl;
        hereBefore = 1;
    }
    int selection = 0;
    while (selection != 1) {
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Leave work." << std::endl;
        //This represents languages using the Latin alphabet.
        std::cout << "2. Copy an easy sentence." << std::endl;
        //This represents languages that don't use the Latin alphabet.
        std::cout << "3. Copy a hard sentence." << std::endl;
        //So that grading isn't tedious
        std::cout << "4. Get $50 for being a TA." << std::endl << std::endl;
        selection = intValidate(1, 4);
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
        else if (selection == 4) {
            int test = theBag->changeMoney(50);
            if (test == 1){
                std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
            }
            std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
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
                int test = theBag->changeMoney(10);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(10);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(10);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(10);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(10);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(20);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(20);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(20);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(20);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
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
                int test = theBag->changeMoney(20);
                if (test == 1){
                    std::cout << "Strangely, although your purse can hold three cats, it can only hold $75." << std::endl;
                }
                std::cout << "Now you have $" << theBag->getMoney() << "." << std::endl << std::endl;
            }
            else {
                std::cout << "The sentences do not match." << std::endl << std::endl;
            }
            break;
        }
    }
}