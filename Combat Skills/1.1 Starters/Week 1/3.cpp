//Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները 
// Տպել այդ զանգվածի էլեմենտների միջին թվաբանականի արժեքը:

#include <iostream>

int main()
{
    const size_t size = 5;
    int arr[size];

    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    int avg {};
    for (size_t i = 0; i < size; ++i)
    {
        avg += arr[i];
    }

    avg /= size;

    std::cout << "The arithmetic average is: " << avg << std::endl;

    return 0;
}