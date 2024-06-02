// Write a program to toggle a particular bit in an integer.

#include <iostream>

int toggle(int num, int position)
{
    int mask = 1 << position;
    int result = num ^ mask;

    return result;
}