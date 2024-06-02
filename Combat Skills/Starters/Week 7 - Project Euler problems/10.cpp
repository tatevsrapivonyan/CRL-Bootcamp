// Find the sum of all the primes below two million.

bool is_prime(int num)
{
    if (num == 1)
    {
        return false;
    }

    if (num == 2)
    {
        return true;
    }

    if (num > 2 && num % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

long euler_10(int num)
{
    long sum {};

    for (int i = 1; i <= num; ++i)
    {
        if (is_prime(i))
        {
            sum += i;
        }
    }

    return sum;
}