/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <string>
#include "bag.hpp"

class Space {

protected:
    Space * top;
    Space * right;
    Space * left;
    Space * bottom;
    Bag * theBag;

public:
    Space(Bag *);
    virtual ~Space();

    void setTop(Space *);
    void setRight(Space *);
    void setLeft(Space *);
    void setBottom(Space *);

    virtual void action();

};


#endif
