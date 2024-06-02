// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։

int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }

    if (num == 1 || num == 2)
    {
        return 1;
    }

    return fib(num - 1) + fib(num - 2);
}