// Write a function that takes a pointer to a string and converts all lowercase letters to uppercase.

#include <iostream>

void to_upper(char* arr)
{
    if (*arr)
    {
        const int diff = 'A' - 'a'; 
        while (*arr)
        {
            if (*arr >= 'a' && *arr <= 'z')
            {
                *arr = *arr + diff;
            }
            ++arr;
        }
    }
}