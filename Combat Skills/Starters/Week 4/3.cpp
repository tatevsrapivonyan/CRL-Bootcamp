// Write a program to calculate the square root of a number using the Newton-Raphson method.

#include <iostream>
#include <cmath>

double square_root_newton_raphson(double number, double epsilon = 1e-10)
{
    if (number < 0)
    {
        throw std::invalid_argument("Cannot calculate square root of a negative number");
    }

    double guess = number / 2.0; 

    while (true)
    {
        double new_guess = 0.5 * (guess + number / guess); 
        if (std::abs(guess - new_guess) < epsilon) 
        {
            break;
        }
        guess = new_guess;
    }

    return guess;
}