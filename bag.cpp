/*******************************************************************************
 ** Author: Beth Myre
 ** Date:
 ** Description:
*******************************************************************************/

#include <string>
#include "bag.hpp"

Bag::Bag() {
    money = 0;
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