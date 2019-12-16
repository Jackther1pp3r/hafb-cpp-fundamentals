/**
 * @file case.cpp
 * @TheJackFernald {Jack Fernald} ({jack@fernald.cc})
 * @brief Multiple IF-Statments and CASE
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */


#include <iostream>
using namespace std;

int main()
{
    char code;
    cout << "Enter the specification code: ";
    cin >> code;

    switch(code)
    {
        case 'S':
            cout << "The item is space exploration grade" << endl;
            break;
        case 'M':
            cout << "The item is Military grade" << endl;
            break;
        case 'C':
            cout << "The item is Commercial exploration grade" << endl;
            break;
        case 'T':
            cout << "The item is Toy grade" << endl;
            break;



        default:
        cout << "The item not supported" << endl;
        break;
    }
}