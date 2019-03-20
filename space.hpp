/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the header file for the Space class, which is the parent
 * class of all of the other space-derived classes.  It is a pure virtual class.
*******************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <string>
#include "bag.hpp"

class Space {

protected:
    //Pointers to adjacent spaces
    Space * top;
    Space * right;
    Space * left;
    Space * bottom;

    //Pointers to the container holding the things Cat Lady collects during the game.
    Bag * theBag;

    //Different things happen based on whether you've already been in a particular space.
    bool hereBefore;

    //Some spaces start out with a cat in them (which needs to be rescued).
    bool catHere;

public:
    Space(Bag *);
    virtual ~Space();

    Space * getTop();
    Space * getRight();
    Space * getLeft();
    Space * getBottom();

    //These are only used during board set-up.
    void setTop(Space *);
    void setRight(Space *);
    void setLeft(Space *);
    void setBottom(Space *);

    //Because this is a pure virtual function, the Space class can't be instantiated.
    virtual int action() = 0;

};


#endif
