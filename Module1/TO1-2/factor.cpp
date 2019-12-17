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
        }
    }
    cout << "The Number is: " << count << endl;
}

/**
 * @brief 
 * 
 * @param mod_number 
 */


void FactorModX(int mod_number)
{
int number;
    unsigned int count = 0;
    for (unsigned x = 1; x <= 30; ++x)
    {
        if (x % mod_number == 0)
        {
            count++;
        }
    }
    cout << "The Number is: " << count << endl;
}

void FactorModRange(int mod_number, int max_range)
{
    int number;
    unsigned int count = 0;
    for (unsigned x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
            count++;
        }
    }
    cout << "The Number is: " << count << endl;
}

unsigned int GetFactorModXRange(int mod_number, int max_range)
{
    int number;
    unsigned int count = 0;
    for (unsigned x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
            count++;
        }
    }
    return count;

}