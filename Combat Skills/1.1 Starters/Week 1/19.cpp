//Իրականացնել to_upper_case(string) ֆունկցիա, որը ստանում է տող (std::string), ձևափոխում և վերադարձնում է նույն տողը, 
//որտեղ բոլոր տառերը մեծատառ են։

#include <iostream>
#include <string>

void to_upper_case(std::string& str)
{
    const int diff = 'A' - 'a';
    
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] += diff;
        }
    }
}