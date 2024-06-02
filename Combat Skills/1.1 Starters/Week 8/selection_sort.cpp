#include <vector>

void selection_sort(std::vector<int>& arr)
{
    std::vector<int> sorted;

    for (size_t i = 0; i < arr.size() - 1; ++i)
    {
        int minimum = arr[i];
        int min_index = i;

        for (size_t j = i + 1; j < arr.size(); ++j)
        {
            if (arr[j] < minimum)
            {
                minimum = arr[j];
                min_index = j;
            }
        }
        std::swap(arr[min_index], arr[i]);
    }
}