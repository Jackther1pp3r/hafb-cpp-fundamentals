#include <iostream>
#include "my_functions.h"
using namespace std;



//Function Definition
int Sum(int num1, int num2)
{
  return num1 + num2;
}

/**
 * @brief increments the value by one
 * 
 */

void UpdateStep(int& step)//Grab value from address in memory
{
  cout << "Current step: " << step << endl;
  step++;
  cout << "New step: "  << step << endl;
 }\