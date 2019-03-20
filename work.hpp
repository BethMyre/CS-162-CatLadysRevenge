/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Work class, which is a child
 * class of the Space class.
*******************************************************************************/

#ifndef WORK_HPP
#define WORK_HPP

#include <string>
#include "space.hpp"

class Work : public Space{

private:
    void hard();
    void easy();

public:
    Work(Bag *);
    ~Work();

    int action();

};


#endif
