/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the implementation file for the DogMan class, which is a child
 * class of the Space class.  This class represents Dog Man's home.
*******************************************************************************/

#include <string>
#include <iostream>
#include "dogMan.hpp"
#include "intValidate.hpp"

DogMan::DogMan (Bag * baggie)
        : Space(baggie) {
}

DogMan::~DogMan() {

}

int DogMan::action() {
    //If the player tries to approach Dog Man's house before having collected all of the cats,
    //they are turned away.
    if (!theBag->getSnowball() || !theBag->getNibbles() || !theBag->getCreases()) {
        std::cout << "You start walking towards Dog Man's house, but then change your mind." << std::endl;
        std::cout << "You're going to focus on rescuing your cats first." << std::endl;
    }
    //Once the player has all of the cats, the following scene takes place.
    else {
        std::cout << "Now that you've rescued all of your cats, it's time to make Dog Man pay." << std::endl;
        std::cout << "You stand next to his mailbox, trying to decide what to do." << std::endl;
        std::cout << "You open your purse to pet your sweet cats while you're thinking." << std::endl;
        std::cout << "Even the little pile of hairballs and cat vomit they've produced doesn't bother you." << std::endl;
        std::cout << "What can you do?  You lean against the mailbox, contemplating..." << std::endl;
        std::cout << "The mailbox... Suddenly, you have an idea!" << std::endl;
        std::cout << "You reach into your purse and take out the hairballs and vomit." << std::endl;
        std::cout << "Gleefully, you shove it all into Dog Man's mailbox." << std::endl;
        std::cout << "Mwahahaha." << std::endl;
        std::cout << "Now all you need to do it make it back home in time for bed at 8:30." << std::endl;

        //This will allow the game to know whether this scene has already happened.
        theBag->setRevenge(1);
    }
    std::cout << "You turn around and leave." << std::endl << std::endl;
    return 2;
}






