/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.hpp"


using std::cout;
using std::endl;
using std::string;

int main() {
    srand(time(0));
    Game myGame;

    int keepPlaying = myGame.start();

    while (keepPlaying == 1) {
        myGame.play();
        keepPlaying = myGame.again();
    }

    return 0;
}