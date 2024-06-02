// Write a function that takes an integer array and its size as parameters
// and returns a pointer to the array's first occurrence of a given number.

#include <iostream>

int* first_occurrence(int* arr, size_t size, int num)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (arr[i] == num)
        {
            return &arr[i];
        }
    }
    return nullptr;
}
