//Գրեք ծրագիր,  որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և տողը վերածում է մեծատառի։

#include <iostream>

int main()
{
    const size_t size {10};

    char arr[size];

    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 0; i < size; ++i)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
    }

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}