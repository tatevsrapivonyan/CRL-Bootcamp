// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?

bool is_prime(long num)
{
    if (num <= 1)
    {
        return false;
    }

    if (num % 2 == 0) 
    {
        return num == 2;
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

long euler_3(long num)
{
    if (num <= 1)
    {
        return 0;
    }

    long largest {1};

    for (long i = 2; i <= num; ++i)
    {
        if ((num % i == 0) && (is_prime(i) == true))
        {
            largest = i;
        }
    }

    return largest;
}