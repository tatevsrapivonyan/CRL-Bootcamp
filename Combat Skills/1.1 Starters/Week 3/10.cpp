// Implement a function to allocate memory for a 2D array dynamically and free it when done.

#include <iostream>

void array_2d_allocate(int**& arr, size_t row, size_t column)
{
    arr = new int*[row];

    for (size_t i = 0; i < row; ++i)
    {
        arr[i] = new int[column];
    }
}

void array_2d_deallocate(int** arr, size_t row)
{
    for (size_t i = 0; i < row; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}