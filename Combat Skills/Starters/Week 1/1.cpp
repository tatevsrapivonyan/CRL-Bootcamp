//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները 
//Տպել նվազագույն և առավելագույն արժեքներով էլեմենտների գումարը:

#include <iostream>

int main()
{
    const size_t size = 5;

    int arr[size];

    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for (size_t i = 1; i < size; ++i)
    {
        maximum = std::max(arr[i], maximum); 
        minimum = std::min(arr[i], minimum);
    }

    std::cout << maximum + minimum << std::endl;
    
    return 0;
}