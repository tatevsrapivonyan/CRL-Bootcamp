// Write a program to check if a particular bit is set in an integer.

bool is_set(int num, int position)
{
    int mask = 1 << position;
    
    int check = num & mask;

    return check && 1;
}