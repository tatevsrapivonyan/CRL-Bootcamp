// Find the difference between the sum of the squares of the first one hundred natural numbers 
// and the square of the sum.

long squares_sum(int num)
{
    long sum {};

    for (int i = 1; i <= num; ++i)
    {
        sum += i * i;
    }

    return sum;
}

long sum_square(int num)
{
    long sum {};

    for (int i = 1; i <= num; ++i)
    {
        sum += i;
    }

    return sum * sum;
}

long euler_6()
{
    return  sum_square(100) - squares_sum(100);
}