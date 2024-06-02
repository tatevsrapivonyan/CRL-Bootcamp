// Write a program to find the maximum of two integers without using comparison operators.

int findMax(int a, int b) {
    int diff = a - b;
    int sign = (diff >> 31) & 1;
    return a - sign * diff;
}