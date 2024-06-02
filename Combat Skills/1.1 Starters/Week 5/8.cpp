// Write a program to check if a given integer is a power of 2 using bitwise operators.

#include <iostream>

bool is_2_power(unsigned int num)
{
    return !(num & (num - 1) == 0);
}