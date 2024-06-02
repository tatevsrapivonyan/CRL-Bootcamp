// Write a program to find the minimum of two integers without using comparison operators.

int min(int a, int b)
{
    int diff = a - b;
    int sign = (diff >> 31) & 1;

    return b + sign * diff;
}