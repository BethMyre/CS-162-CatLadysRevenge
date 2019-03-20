/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Home class, which is a child
 * class of the Space class.
*******************************************************************************/

#ifndef HOME_HPP
#define HOME_HPP

#include <string>
#include "space.hpp"

class Home : public Space{

private:

public:
    Home(Bag *);
    ~Home();

    int action();

};


#endif