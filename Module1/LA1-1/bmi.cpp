#include <iostream>
using namespace std;


int main()
{
    // calculate BMI; wight(kg)/height(m)]^2
    //floating point variables: float, double

    float weight = 0, height = 0, bmi = 0;
    
    cout << "Please enter weight: " << endl;
    cin >> weight;
    cout << "Please enter height: " << endl;
    cin >> height;

    bmi = weight/(height*height);

    cout << "Your BMI is: " << bmi << endl;


    return 0;
}