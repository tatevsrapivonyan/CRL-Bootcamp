// Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է n բնական թիվ և տպում է 0-ից n թվերը։

#include <iostream>

void recursive_print(int num)
{
    if (num == 0)
    {
        return;
    }
    recursive_print(--num);
    std::cout << num << " ";
}