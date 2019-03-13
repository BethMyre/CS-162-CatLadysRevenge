/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
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

    void action();

};


#endif
