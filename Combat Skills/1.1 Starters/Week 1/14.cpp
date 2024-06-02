// Իրականացնել ֆունկցիա, որը ընդունում է սիմվոլների զանգված որպես արգումենտ
// և ստանում է այդ զանգվածի շրջված տարբերակը, նույն զանգվածի մեջ։

#include <iostream>

void reverse(char arr[], size_t size)
{
    for (size_t i = 0; i < size / 2; ++i)
    {
        char tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}