//Գրել ծրագիր, որը թույլ կտա մուտքագրել char-երի զանգված։ Զանգվածում էլեմենտները դասավորել հակառակ հերթականությամբ և տպել էկրանին։

#include <iostream>

int main()
{
    const size_t size = 5;
    char arr[size];

    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 0; i < size / 2; ++i)
    {
        char tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
    }

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}