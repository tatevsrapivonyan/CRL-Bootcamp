// Write a C++ program to swap two numbers using pointers.

#include <iostream>

void simple_swap(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a = 4;
    int b = 5;

    std::cout << "a: " << a << ", b: " << b << std::endl;

    simple_swap(&a, &b);

    std::cout << "a: " << a << ", b: " << b << std::endl;

}