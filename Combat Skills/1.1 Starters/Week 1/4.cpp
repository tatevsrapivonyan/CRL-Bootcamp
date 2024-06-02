//Գրեք ծրագիր,  որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և դուրս կբերի բոլոր թվերը:

#include <iostream>

int main()
{
    const size_t size = 5;
    char arr[size];

    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 0; i < size; ++i)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            std::cout << arr[i] << " ";
        }
    }

    return 0;
}