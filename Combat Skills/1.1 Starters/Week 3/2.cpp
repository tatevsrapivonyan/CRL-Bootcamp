// Write a function that takes an integer array and its size as parameters 
// and returns the maximum element using pointers.

#include <iostream>

int array_max(int* arr, size_t size)
{
    int maximum = *arr;

    for (size_t i = 0; i < size; ++i)
    {
        if (*(arr + i) > maximum)
        {
            maximum = *(arr + i);
        }
    }

    return maximum;
}