//Տրված նախադասության համար դուրս բերել եւ տպել բոլոր թվերը։

#include <iostream>

void print_nums(char arr[], size_t size)
{
    char nums[size];
    size_t nums_size {};

    for (size_t i = 0; i < size; ++i)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            nums[nums_size] = arr[i];
            ++nums_size;
        }
    }
    nums[nums_size] = '\0';

    std::cout << nums << std::endl;
}