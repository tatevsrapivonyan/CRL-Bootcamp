//Հայտարարել տարբեր չափի, երկու ամբողջ թվային զանգվածներ և տպել զանգվածները հակառակ հերթականությամբ օգտագործելով մի for

#include <iostream>

int main()
{
    const size_t size_1 = {5};
    const size_t size_2 = {3};

    int arr[size_1] {1, 2, 3, 4, 5};
    int brr[size_2] {6, 7, 8};

    const size_t new_size = size_1 + size_2;

    int crr[new_size];

    if (size_2 < size_1)
    {
        for (size_t i = 0; i < size_1; ++i)
        {
            crr[i] = arr[i];
            crr[i + size_1] = brr[i];       
        }
    }
    else 
    {
        for (size_t i = 0; i < size_2; ++i)
        {
            crr[i] = arr[i];
            crr[i + size_2] = brr[i];
        }
    }

    for (size_t i = 0; i < new_size; ++i)
    {
        std::cout << crr[i] << " ";
    }

    return 0;
}