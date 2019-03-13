/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <iostream>
#include <string>
#include "space.hpp"

Space::Space(std::string name){
    this->name = name;
    top = nullptr;
    right = nullptr;
    left = nullptr;
    bottom = nullptr;
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

void Space::description(){
    std::cout << "Welcome to " << name << "." << std::endl;
}

void Space::action(){
    std::cout << "This is where the things that happen in " << name << " happen." << std::endl;
}