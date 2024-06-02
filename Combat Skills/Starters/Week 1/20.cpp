//Իրականացնել ֆունկցիա, որը ունի հետևյալ նախատիպը (prototype) double power (int num, int exp); 
//Ֆունկցիան վերադարձնում է num ամբողջ թվի exp աստիճանի արժեքը։

#include <iostream>

double power(int num, int exp)
{
    double res {1.0};
    
    if (exp > 0)
    {
        while (exp)
        {
            res *= num;
            --exp;
        }
    } else 
    {
        while (exp)
        {
            res /= (double)num;
            ++exp;
        }
    }

    return res;
}