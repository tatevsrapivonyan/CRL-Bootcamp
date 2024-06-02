// Write a program to count the number of trailing zeros in an integer.

int trailing_zeros(unsigned int num)
{
    int count = 0;
    int mask = 1;

    while ((num & mask) == 0)
    {   
        ++count;
        mask = mask << 1;
    }

    return count;
}