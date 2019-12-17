/**
 * @file main.cpp
 * @TheJackFernald {Jack Fernald} ({jack@fernald.cc})
 * @brief 
 * @version 0.1
 * @date 2019-12-17
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include "factor.h"

using namespace std;

int main()
{
    FactorMod3();
    FactorModX(3);
    FactorModX(5);
    FactorModRange(5,100);
    unsigned int count = GetFactorModXRange(5, 500);
    cout << "you got GF: " << count << endl;
    auto count2 = GetFactorModXRange(2, 500);
    cout << "You got GF: " << count2 << endl;
    return 0;
}
