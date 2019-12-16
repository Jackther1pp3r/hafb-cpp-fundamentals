/**
 * @file multi_tables.cpp
 * @TheJackFernald {Jack Fernald} ({jack@fernald.cc})
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
# include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int kMax = 20;

int main()
{
    int number;
    cout << "Enter number to print multiplcation tables: " << endl;
    cin >> number;
    cout << "Number entered: " << number << endl;

    for(int num1 = 1; num1 <= number; ++num1)
    {
        for(int num2 = 1; num2 <= kMax; ++num2)
        {
        cout << setw(num2) << num1* num2 << "  ";

        }
        cout << endl;
    }
    return 0;
}
