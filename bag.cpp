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
    snowball = 0;
}

int Bag::getMoney() {
    return money;
}

void Bag::increaseMoney(int moreMoney) {
    money += moreMoney;
}

void Bag::decreaseMoney(int lessMoney) {
    money -= lessMoney;
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