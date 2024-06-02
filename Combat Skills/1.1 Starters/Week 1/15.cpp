//Իրականացնել ֆունկցիա, որը կվերադարձնի true եթե unsigned int արգումենտի least significant և most significant բիթերը իրար հավասար են։

#include <iostream>
#include <string>
#include <algorithm>

std::string to_binary(unsigned int num)
{
    if (num < 2)
    {
        return std::to_string(num);
    }

    std::string res {};
    while (num)
    {
        res += num % 2 + '0';
        num /= 2;
    }

    std::reverse(res.begin(), res.end());
    return res;
}

bool ls_equal_ms(unsigned int num)
{
    return to_binary(num)[0] == to_binary(num)[to_binary(num).size() - 1];
}