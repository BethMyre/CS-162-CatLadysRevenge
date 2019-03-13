/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <string>

class Space {

protected:
    std::string name;
    Space * top;
    Space * right;
    Space * left;
    Space * bottom;

public:
    Space(std::string);
    virtual ~Space();

    void setTop(Space *);
    void setRight(Space *);
    void setLeft(Space *);
    void setBottom(Space *);

    virtual void description();
    virtual void action();

};


#endif
