#include <iostream>
using namespace std;

int main()
{
    int age;
    cout <<"Enter your age: ";
    cin >> age;
    // Task display rights by age:
    // 1) If you are uner 18 , you must go to school
    if (age < 18)
    {   
        cout << "You Should be in school" << endl;
    }
    // 2) if you are over 18, you can vote
    else if ( age >= 18 && age <= 21)
    {
        cout << "You can vote!" << endl;
    }
    // 3) If you are 21, you can buy alcohol
    else if (age > 21 && age < 65)
    {
        cout << "You can buy Alcohol!" << endl;
    }
    // 3) If you are over 65, you can retire
    else if (age > 65 )
    {
        cout << "You can retire" << endl;
    }


    return 0;
}