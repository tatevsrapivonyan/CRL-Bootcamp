// Implement an algorithm to find all prime numbers up to a given limit.

#include <iostream>

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    if (num == 2)
    {
        return true;
    }

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void print_primes(int num)
{
    for (int i = 2; i <= num; ++i)
    {
        if (is_prime(i))
        {
            std::cout << i << " ";
        }
    }
}