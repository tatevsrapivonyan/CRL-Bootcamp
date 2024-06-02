// Իրականացնել ռեկուրսիվ ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը:

int digits_sum(int num)
{
    if (num < 10)
    {
        return num;
    }
    
    return num % 10 + digits_sum(num / 10);
}