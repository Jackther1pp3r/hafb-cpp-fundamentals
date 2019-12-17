#include "factor.h"
#include <iostream>
using namespace std;

void FactorMod3()
{
    int number;
    unsigned int count = 0;
    for (unsigned x = 1; x <= 30; ++x)
    {
        if (x % 3 == 0)
        {
            count++;
            cout << "Please enter the number: " << endl;
            cin >> number;
        }
    }
}