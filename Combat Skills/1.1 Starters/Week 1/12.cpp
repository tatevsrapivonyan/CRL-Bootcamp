//Մուտքագրել թիվ, փոխակերպել թիվը տասնվեցական համակարգի թվի եւ տպել արդյունքը։

#include <iostream>
#include <string>
#include <algorithm>

std::string to_hex(int num)
{
    std::string result {};

    if (num <= 9)
    {
        result += std::to_string(num);
    }
    else
    {
        while (num)
        {
            if (num % 16 < 10)
            {
                result += std::to_string(num % 16);
            }
            else 
            {
                result += num % 16 - 10 + 'A';
            }
            num /= 16;
        }
    }
    std::reverse(result.begin(), result.end());
    return result;
} 