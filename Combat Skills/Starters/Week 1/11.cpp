//Իրականացնել int տիպի արժեք վերադարձնող ֆունկցիա, որը վերադարձնում է՝ 1, 
//եթե ֆունկցային փոխանցված ամբողջ թիվը կարող է արտահայտվել երկու պարզ թվերի գումարով,
//հակառակ դեպքում ֆունկցիան կվերադարձնի՝ 0:

#include <iostream>

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    if (num == 2 || num == 3)
    {
        return true;
    }

    for (int i = 3; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int is_primes_sum(int num)
{
    for (int i = 0; i <= num / 2; ++i)
    {
        if (is_prime(i) && is_prime(num -i))
        {
            return 1;
        }
    }
    return 0;
}