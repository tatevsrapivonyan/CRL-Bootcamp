// Write a program to find the absolute value of an integer without using conditional statements.

int abs(int num)
{
    int mask = num >> 31;

    return (num + mask) ^ mask;
}