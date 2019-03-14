/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
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