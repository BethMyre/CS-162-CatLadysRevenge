/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include "bag.hpp"

Bag::Bag() {
    money = 0;
    tuna = 0;
    mousetraps = 0;
    snowball = 0;
    nibbles = 0;
    creases = 0;
}

int Bag::getMoney() {
    return money;
}

int Bag::changeMoney(int diffMoney) {
    money += diffMoney;
    if (money > 100){
        money = 100;
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