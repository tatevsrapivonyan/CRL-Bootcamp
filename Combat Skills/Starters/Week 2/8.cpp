// Իրականացնել ռեկուրսիվ ֆունկցիա, որը կստանա տող և կվերադարձնի տողի երկարությունը։

#include <iostream>

size_t strlen_recursive(const char* arr)
{
    if (*arr == '\0')
    {
        return 0;
    }
    return 1 + strlen_recursive(arr + 1);
}