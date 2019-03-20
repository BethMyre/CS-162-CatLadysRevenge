/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the implementation file for the Space class, which is the parent
 * class of all of the other space-derived classes.  It is a pure virtual class.
*******************************************************************************/

#include <iostream>
#include <string>
#include "space.hpp"
#include "bag.hpp"

Space::Space(Bag * baggie){
    top = nullptr;
    right = nullptr;
    left = nullptr;
    bottom = nullptr;
    theBag = baggie;
    hereBefore = 0;
}

Space::~Space(){

}

Space * Space::getTop() {
    return top;
}

Space * Space::getRight() {
    return right;
}

Space * Space::getLeft() {
    return left;
}

Space * Space::getBottom() {
    return bottom;
}


void Space::setTop(Space * top){
    this->top = top;
}

void Space::setRight(Space * right){
    this->right = right;
}

void Space::setLeft(Space * left){
    this->left = left;
}

void Space::setBottom(Space * bottom){
    this->bottom = bottom;
}
