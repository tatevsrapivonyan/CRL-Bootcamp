//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքերը
// Տպել բոլոր էլեմենտների գումարը, արտադրյալը:

#include <iostream>

int main()
{
    const size_t size = 5;
    int arr[size];
    
    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    long sum {};
    long mul {1};

    for (size_t i = 0; i < size; ++i)
    {
        sum += arr[i];
        mul *= arr[i];
    }

    std::cout << "Elements sum is: " << sum << "\n Elements product is: " << mul << std::endl;

    return 0;
}
