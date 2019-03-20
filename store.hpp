/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Store class, which is a child
 * class of the Space class.
*******************************************************************************/

#ifndef STORE_HPP
#define STORE_HPP

#include <string>
#include "space.hpp"

class Store : public Space{

private:
    bool tuna;

public:
    Store(Bag *);
    ~Store();

    int action();

};


#endif