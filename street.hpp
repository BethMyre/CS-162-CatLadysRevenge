/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Street class, which is a child
 * class of the Space class.
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

