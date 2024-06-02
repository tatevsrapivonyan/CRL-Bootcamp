// Write a program to calculate the area of a circle given its radius.

#include <iostream>
#include <cmath>

const double PI = 3.14;

double circle_area(double radius)
{
    return PI * sqrt(radius);
}