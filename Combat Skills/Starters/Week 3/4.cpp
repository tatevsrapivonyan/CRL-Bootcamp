// Write a function that takes an array of integers and its size as parameters
// and dynamically allocates memory for the array using pointers.

#include <iostream>

int* allocate(int* arr, size_t size)
{
    return new int[size];
}