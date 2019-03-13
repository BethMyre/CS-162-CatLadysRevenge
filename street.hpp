/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef STREET_HPP
#define STREET_HPP

#include <string>
#include "space.hpp"

class Street : public Space{

private:


public:
    Street(Bag *);
    ~Street();

    void action();

};


#endif

