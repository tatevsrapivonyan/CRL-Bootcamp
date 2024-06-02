// Write a program to calculate the least common multiple (LCM) of two integers.

#include <iostream>

int gcd(int num1, int num2)
{
    if (num1 < num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    if (num2 == 0)
    {
        return num1;
    }
    return gcd(num2, num1 % num2);
}

int least_common_multiple(int num1, int num2)
{
    return (num1 * num2) / gcd(num1, num2);
}