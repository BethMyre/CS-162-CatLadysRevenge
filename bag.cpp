/*******************************************************************************
 ** Author: Beth Myre
 ** Date: 3/19/19
 ** Description: This is the implementation file for the Bag class, which is used to hold
 * the things that Cat Lady accumulates throughout the game.
*******************************************************************************/

#include <string>
#include "bag.hpp"

Bag::Bag() {
    money = 0;
    tuna = 0;
    snowball = 0;
    nibbles = 0;
    creases = 0;
    revenge = 0;
}

int Bag::getMoney() {
    return money;
}

//changeMoney(int) is used to add or subtract money from Cat Lady's purse.
//The bag can hold a maximum of $75, so any amount that goes over the limit
//is set back to $75.  Based on which bool the function returns,
//the program knows whether this has happened.  The limit is low enough that
//players will always have to go back to work at least once.
int Bag::changeMoney(int diffMoney) {
    money += diffMoney;
    if (money > 75){
        money = 75;
        return 1;
    }
    else {
        return 0;
    }
}

bool Bag::getTuna() {
    return tuna;
}

void Bag::setTuna(bool tunaPresent) {
    tuna = tunaPresent;
}

bool Bag::getSnowball() {
    return snowball;
}

void Bag::setSnowball(bool snowballPresent) {
    snowball = snowballPresent;
}

bool Bag::getNibbles() {
    return nibbles;
}

void Bag::setNibbles(bool nibblesPresent) {
    nibbles = nibblesPresent;
}

bool Bag::getCreases() {
    return creases;
}

void Bag::setCreases(bool creasesPresent) {
    creases = creasesPresent;
}

bool Bag::getRevenge() {
    return revenge;
}

void Bag::setRevenge(bool revengePresent) {
    revenge = revengePresent;
}