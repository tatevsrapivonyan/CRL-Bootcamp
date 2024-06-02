//Գրեք ծրագիր, որը ամբողջ թվային զանգվածի բոլոր զույգ էլեմենտները  նույն զանգվածի մեջ՝ կտեղավորի զանգվածի սկզբից, իսկ կենտերը վերջից:

#include <iostream>

int main()
{
    const size_t size = 5;
    int arr[size] {1, 2, 3, 4, 5};

    for (size_t i = 0; i < size - 1; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            for (size_t j = i + 1; j < size; ++j)
            {
                if (arr[j] % 2 != 0)
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}