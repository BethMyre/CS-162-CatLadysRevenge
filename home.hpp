/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef HOME_HPP
#define HOME_HPP

#include <string>
#include "space.hpp"

class Home : public Space{

private:
    bool doorknobPresent;
    bool snowballHere;

public:
    Home(Bag *);
    ~Home();

    int action();

};


#endif