#include <algorithm>

void bubble_sort(int arr[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}