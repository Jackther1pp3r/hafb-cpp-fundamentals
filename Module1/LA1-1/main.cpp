#include <iostream>

using namespace std;

int main()
{
    int age;

    std:cout << "My name is Jack" << std::endl;
    cout << "Hello Word" << endl;
    cout << "what is your age?" <<  endl;
    cin >> age;
    cout << "I see you are: " << age << endl;
    cout << "inetegers are: " << sizeof(int) << " bytes" << endl;

    cout << "Min integers value: " << INT32_MIN <<
        " Mas Integers value: " << INT32_MAX << "bytes" << endl;
        
    return 0;
}