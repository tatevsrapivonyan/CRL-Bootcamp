// Իրականացնել ռեկուրսիվ ֆունկցիա, որը հաշվում է երկու թվերի ամենամեծ ընդհանուր բաժանարարը։

int gcd(int num1, int num2)
{
    if (num1 < num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    if (num2 == 0)
    {
        return num1;
    }
    return gcd(num2, num1 % num2);
}