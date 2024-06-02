// Write a program to multiply two integers using bitwise operators.

int mul(int num1, int num2)
{
    int result = 0;

    while (num2 != 0)
    {
        if (num2 & 1)
        {
            result += num1;
        }

        num1 <<= 1;
        num2 >>= 1;
    }

    return result;
}