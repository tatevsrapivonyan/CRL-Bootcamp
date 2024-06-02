// Write a program to reverse the bits of an integer.

int reverse_bits(int num)
{
    int reverse = 0;

    while (num)
    {
        reverse = (reverse << 1) | (num & 1);
        num >>= 1;
    }

    return reverse;
}