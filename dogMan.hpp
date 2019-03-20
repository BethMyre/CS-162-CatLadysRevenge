/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the DogMan class, which is a child
 * class of the Space class.  This class represents Dog Man's home.
*******************************************************************************/

#ifndef DOGMAN_HPP
#define DOGMAN_HPP

#include <string>
#include "space.hpp"

class DogMan : public Space{

private:

public:
    DogMan(Bag *);
    ~DogMan();

    int action();
};


#endif
