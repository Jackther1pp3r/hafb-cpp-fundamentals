#include <iostream>
#include "distance.h"

/**
 * @brief Show the distance and inches in:
 * feet'-inches" format.
 * 
 */
void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl; 
}

/**
 * @brief Plus + Operator for Distance objects
 * 
 * @param d2 Second Distance object
 * @return Distance : Sum of self + d2 objects
 */
Distance Distance::operator + (Distance rhs) const
{
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;
    // Update values IF inches > 12
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    // Distance temp(feet, inches);
    // return temp;
    return Distance(feet, inches);
}


 std::ostream &operator <<(std::ostream &os, const Distance& distance)
 {
     os << "Feet: " << distance.feet_ << " Inches: " << distance.inches_;
     return os;

 };