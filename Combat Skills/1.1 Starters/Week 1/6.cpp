// Գրել ծրագիր, որը կտպի զանգվածի կենտ էլեմենտների քանակը։

#include <iostream>

int main()
{
    const size_t size = 5;
    int arr[size] {1, 2, 3, 4, 5};
    int odd_count {};

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2 != 0)
        {
            ++odd_count;
        }
    }

    std::cout << odd_count << std::endl;

    return 0;
}