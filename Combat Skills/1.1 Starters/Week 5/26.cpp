// Write a program to find the number of bits required to represent an integer.

int bit_count(int num)
{
    int counter {};

    while (num)
    {
        num >>= 1;
        ++counter;
    }

    return counter;
}