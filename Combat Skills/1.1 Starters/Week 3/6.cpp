// Write a function that takes an array of integers and its size as parameters 
// and calculates the sum of all elements using pointer arithmetic.

#include <iostream>

int sum(int* arr, size_t size)
{
    int add {};

    for (size_t i = 0; i < size; ++i)
    {
        add += *(arr + i);
    }

    return add;
}