/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Park class, which is a child
 * class of the Space class.
*******************************************************************************/

#ifndef PARK_HPP
#define PARK_HPP

#include <string>
#include "space.hpp"

class Park : public Space{

private:


public:
    Park(Bag *);
    ~Park();

    int action();

};


#endif