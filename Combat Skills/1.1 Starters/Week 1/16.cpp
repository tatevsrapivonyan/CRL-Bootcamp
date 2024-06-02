//Գրել ֆունկցիա, որը ստանում է ամբողջ թիվ (int), այդ թվին գումարում նրա reverse֊ը, քանի դեռ չի ստացել պոլինդրոմ արժեք, 
//և վերադարձնում է քայլերի քանակը, այդ արժեքին հասնելու համար։

#include <iostream>

int reverse_number(int num)
{
    int reverse {};

    while (num)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}

bool is_palindrom(int num)
{
    return num == reverse_number(num);
}

int palindromise(int num)
{
    int count {};

    while(num != reverse_number(num))
    {
        num += reverse_number(num);
        ++count;
    }
    return count;
}