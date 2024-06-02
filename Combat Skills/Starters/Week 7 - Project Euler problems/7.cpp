// What is the 10001st prime number?

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

int euler_7(int num)
{
    int i = 1;

    while (num > 0)
    {
        ++i;
        if (is_prime(i))
        {
            --num;
        }
    }

    return i;
}