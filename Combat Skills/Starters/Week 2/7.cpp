// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է թիվ և վերադարձնում թվի թվանշանների արտադրյալը։

int product(int num)
{
    if (num <= 1)
    {
        return 1;
    }

    return num % 10 * product(num / 10);
}