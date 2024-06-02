//Մուտքագրել թիվ, փոխակերպել թիվը երկուական համակարգի թվի եւ տպել արդյունքը։

#include <iostream>
#include <string>
#include <algorithm>

void to_binary(int num)
{
    std::string result {};

    if (num < 2)
    {
        result += std::to_string(num);
    }
    else 
    {
        while (num)
        {
            result += std::to_string(num % 2);
            num /= 2;
        }
    }

    std::reverse(result.begin(), result.end());

    std::cout << result << std::endl;
}