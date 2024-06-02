// Write a function that takes an array of integers and its size by reference 
// and fills the array with random numbers.

#include <iostream>
#include <random>

void generate_array(int*& arr, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }
}