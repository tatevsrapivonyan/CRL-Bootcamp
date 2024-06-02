// A palindromic number reads the same both ways. 
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

int reverse_num(int num)
{
    int res {};

    while (num)
    {
        res = res * 10 + num % 10;
        num /= 10;
    }

    return res;
}

bool is_palindrom(int num)
{
    return reverse_num(num) == num;
}

int euler_4()
{
    int largest_palindrom {};
    int start = 100;
    int end = 999;

    for (int i = start; i <= end - 1; ++i)
    {
        for (int j = i + 1; j <= end; ++j)
        {
            if (is_palindrom(i * j) && (i * j) > largest_palindrom)
            {
                largest_palindrom = i * j;
            }
        }
    }

    return largest_palindrom;
}