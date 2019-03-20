/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Park class, which is a child
 * class of the Space class.
*******************************************************************************/

#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP

#include <string>
#include "space.hpp"

class Restaurant : public Space{

private:


public:
    Restaurant(Bag *);
    ~Restaurant();

    int action();

};


#endif
