// Write a program to concatenate two strings without using library functions, only pointers.

#include <iostream>
#include <cstring>

char* concat(char* str1, const char* str2)
{   
    char* res = str1;

    while (*str1)
    {
        ++str1;
    }

    while (*str2)
    {
        *str1 = *str2;
        ++str1;
        ++str2;
    }

    *str1 = '\0';

    return res;
}