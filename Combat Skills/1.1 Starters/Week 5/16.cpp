// Write a program to find the position of the rightmost set bit in an integer.

int position_rightmost_set_bit(unsigned int num)
{
    int position = 0;

    while ((num & 1) == 0)
    {   
        ++position;
        num >>= 1;
    }

    return position;
}