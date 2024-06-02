//Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է զանգված և վերադարձնում զանգվածի ամենափոքր էլեմենտը։

#include <iostream>

int minimum(int arr[], size_t size)
{
    if (size == 1)
    {
        return arr[0];
    }

    return std::min(minimum(arr, size - 1), arr[size - 1]);
}