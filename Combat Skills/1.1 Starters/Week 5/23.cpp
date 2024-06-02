// Write a program to check if two integers have opposite signs without using comparison operators.

bool sign_check(int num1, int num2)
{
    return (num1 >> 31) ^ (num2 >> 31);
}