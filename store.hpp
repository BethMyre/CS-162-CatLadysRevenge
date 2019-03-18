/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
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