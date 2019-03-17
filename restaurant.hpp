/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
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
