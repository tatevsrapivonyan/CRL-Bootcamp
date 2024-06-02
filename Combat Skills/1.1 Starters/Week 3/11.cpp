// Write a program to convert an integer into a character array using pointer casting.

#include <iostream>

char* cast_integer(int num)
{
    char* integer = (char*)&num;
    char* res = new char[sizeof(int)];

    for (int i = 0; i < sizeof(int); ++i)
    {
        res[i] = *(integer + i);
    }
    return res;
}