// Write a program to set a particular bit in an integer to 1.

int set_bit(unsigned int num, int index)
{
    int mask = 1 << index;

    int result = num | mask;

    return result;
}