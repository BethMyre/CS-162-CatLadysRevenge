/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include <iostream>
#include "store.hpp"
#include "intValidate.hpp"

Store::Store (Bag * baggie)
        : Space(baggie) {
    catHere = 1;
    tuna = 1;
}

Store::~Store() {

}

int Store::action() {
    int selection = 0;
    if (hereBefore == 0) {
        std::cout << "You enter the small store to see what they have for sale." << std::endl;
        std::cout << "A man stands behind a glass counter." << std::endl;
        std::cout << "Under the counter you see a can of tuna, some other items you're not interested in, " << std::endl;
        std::cout << "and ... a cat!  It's your hairless cat Creases!" << std::endl;
        std::cout << "\"Sir!\" you say.  \"That's my cat!\"" << std::endl;
        std::cout << "The man shakes his head.  \"The tuna costs $10 and the cat costs $75.\"" << std::endl << std::endl;
        hereBefore = 1;
    }
    if (catHere == 0 && tuna == 0) {
        std::cout << "Since you've already bought anything you might want from the store, "
            << "there's nothing else for you to do here." << std::endl << std::endl;
    }
    else {
        while (selection != 1) {
            std::cout << "What would you like to do?" << std::endl;
            std::cout << "1. Leave the store." << std::endl;
            std::cout << "2. Buy something." << std::endl;
            selection = intValidate(1, 2);
            if (selection == 2) {
                if (catHere == 1){
                    std::cout << "Would you like to buy Creases for $75?" << std::endl;
                    std::cout << "1. Yes." << std::endl;
                    std::cout << "2. No." << std::endl;
                    int choice = intValidate(1, 2);
                    if (choice == 1) {
                        if (theBag->getMoney() >= 75) {
                            std::cout << "You pay $75 to the shopkeeper and carefully place Creases into your purse."
                                << std::endl;
                            theBag->changeMoney(-75);
                            std::cout << "You have $" << theBag->getMoney() << " remaining." << std::endl << std::endl;
                            theBag->setCreases(1);
                            catHere = 0;
                        }
                        else {
                            std::cout << "You do not have enough money to buy Creases." << std::endl << std::endl;
                        }
                    }
                }
                if (tuna == 1){
                    std::cout << "Would you like to buy the can of tuna for $10?" << std::endl;
                    std::cout << "1. Yes." << std::endl;
                    std::cout << "2. No." << std::endl;
                    int choice = intValidate(1, 2);
                    if (choice == 1) {
                        if (theBag->getMoney() >= 10) {
                            std::cout << "You pay $10 to the shopkeeper and put the tuna into your purse."
                                      << std::endl;
                            theBag->changeMoney(-10);
                            std::cout << "You have $" << theBag->getMoney() << " remaining." << std::endl << std::endl;
                            theBag->setTuna(1);
                            tuna = 0;
                        }
                        else {
                            std::cout << "You do not have enough money to buy the tuna." << std::endl << std::endl;
                        }
                    }
                }
                if (catHere == 0 && tuna == 0) {
                    std::cout << "There is nothing else that you're interested in buying." << std::endl << std::endl;
                }
            }
        }
    }
    std::cout << "You turn around and leave." << std::endl << std::endl;
    return 3;
}





