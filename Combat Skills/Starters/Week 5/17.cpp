// Write a program to find the position of the leftmost set bit in an integer.

int leftmost_set_bit(unsigned int num)
{
    int position = sizeof(int) * 8 - 1;
    int mask = 1 << sizeof(int) * 8 - 1;
    
    while ((mask & num) == 0 && mask != 0)
    {
        --position;
        mask >>= 1;
    }

    return position;
}