/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
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
