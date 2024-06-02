// Write a program to count the number of set bits in an integer (population count).

int bits_count(int num)
{
    int mask = 1;
    int count = 0;

    while (mask)
    {
        if (num & mask)
        {
            ++count;
        }
        mask <<= 1;
    }

    return count;
}