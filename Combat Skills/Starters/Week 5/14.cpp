// Write a program to count the number of leading zeros in an integer.

#include <iostream>

int leading_zeros(unsigned int num)
{
    int mask = 1;
    int count = 0;
    int max_count = 0;

    if (num == 0)
    {
        return sizeof(int) * 8 - 1;
    }

    while (mask)
    {
        if (num & mask)
        {
            max_count = std::max(count, max_count);
            count = 0;
        } 
        else 
        { 
            ++count;
        }
        mask = mask << 1;
    }

    return std::max(count, max_count);
}