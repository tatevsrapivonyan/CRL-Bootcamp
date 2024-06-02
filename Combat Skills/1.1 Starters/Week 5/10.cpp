// Write a program to clear a particular bit in an integer to 0.

int reset_bit(int num, int index)
{
    int mask = ~(1 << index);

    int result = mask & num;

    return result;
}