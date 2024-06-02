// Write a program to swap two numbers without using a temporary variable using bitwise operators.

void swap(int& num1, int& num2)
{
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}