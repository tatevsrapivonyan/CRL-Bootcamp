// Write a program to check if a number is negative without using comparison operators.

bool is_negative(int num)
{
    return num >> 31 & 1;
}