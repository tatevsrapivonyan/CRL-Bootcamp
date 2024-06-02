// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է N թիվ և վերադարձնում այդ թվի երկուական համակարգում ներկայացումը։

#include <string>

std::string to_binary(int num)
{
    if (num < 2)
    {
        return std::to_string(num);
    }

    return to_binary(num / 2) + std::to_string(num % 2);
}