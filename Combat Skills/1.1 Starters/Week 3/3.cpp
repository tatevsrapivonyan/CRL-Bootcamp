// Write a function that takes a character array (string)
// and prints it in reverse order using pointers.

#include <iostream>
#include <cstring>

void print_reverse(const char* str)
{
    for (size_t i = std::strlen(str) - 1; i != -1; --i)
    {
        std::cout << *(str + i);
    }
}