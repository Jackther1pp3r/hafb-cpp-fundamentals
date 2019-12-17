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
 }

 int Max10(const std::array<int, 10> nums)
 {
   int max = nums[0];
   for (auto num : nums)
   {
     if(max <= num)
     {
      max = num;
     }
   }
 }

 void ClearElements(std::array<int, 10>& nums)
 {
   for(int index = 0; index <= nums.size(); ++index);
   nums[index] = -99;
 }