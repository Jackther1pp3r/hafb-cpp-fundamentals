/**
 * @file mysquares.cpp
 * @TheJackFernald {Jack Fernald} ({jack@fernald.cc})
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip> //for formatted output
#include <cmath> // For sqrt() function
using namespace std;

const int kMaxCount = 100;


int main()
{
    cout << "NUMBER    SQUARE ROOT" << endl;
    cout << "------    -----------" << endl;
    cout << setiosflags(ios::showpoint);
    for (int count = 1; count < kMaxCount; ++count)
    {
        cout << setw(4) << count ;
    }

    cout << 81 << sqrt(81) << endl;
    return 0;

}