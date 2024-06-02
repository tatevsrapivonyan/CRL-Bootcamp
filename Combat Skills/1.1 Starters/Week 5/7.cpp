// Write a program to check if a given integer is even or odd using bitwise operators.

bool is_even(int num)
{
    return !(num & 1);
}