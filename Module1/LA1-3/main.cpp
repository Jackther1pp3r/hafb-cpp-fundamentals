#include <iostream>
#include "my_functions.h"

using namespace std;

// Main Function
int main()
{
  int number1 = 5, number2 = 10;
  cout << "The sum of " << number1 << " and " << number2
    << " is: " << Sum(number1, number2) << endl;

    cout << "Number before UpdateStep(): " << number1 << endl;
    UpdateStep(number1);
  return 0;

  array <int, 10> temperatures = {-12, 34,67,0,12,44,99,-8,18,33};
  cout << "The max number of temperatures is: " << Max10(temperatures) << endl;
  ClearElements(temperatures);
  for(auto temp : temperatures)
  {
    cout << temp << endl;
  }

}

