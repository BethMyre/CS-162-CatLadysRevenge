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
    void displayMap();

public:
    Street(Bag *);
    ~Street();

    int action();
    void displayPurse(Bag * baggie);

};


#endif

