//Տրված նախադասության համար տպել ամենաերկար բառը։

#include <iostream>
#include <cstring>

void print_longest_word(char arr[], size_t size)
{
    char word[size];
    char current[size];
    size_t longest{};
    size_t curr {};

    for (size_t i = 0; i < size; ++i)
    {
        if (arr[i] == ' ')
        {
            current[curr] = '\0';
            if (curr > longest)
            {
                std::strcpy(word, current);
                longest = curr;
                curr = 0;
            }
        }
        else 
        {
            current[curr] = arr[i];
            ++curr;
        }
    }

    current[curr] = '\0';
    if (curr > longest)
    {
        longest = curr;
        std::strcpy(word, current);
    }

    std::cout << word << std::endl;
}