/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
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
}

Space::~Space(){

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

void Space::action() {

}