// Implement a sorting algorithm that uses a pointer to a comparison function 
// to determine the order of elements.

#include <vector>
#include <iostream>

void bubble_sort(std::vector<int>& vec, bool (*compare)(int, int))
{
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        for (size_t j = 0; j < vec.size() - i - 1; ++j)
        {
            if (compare(vec[j], vec[j + 1]))
            {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
}

bool bigger(int a, int b)
{
    return a > b;
}

bool smaller(int a, int b)
{
    return a < b;
}

int main()
{
    std::vector<int> vec {1, 20, 14, 5, 6};
    bubble_sort(vec, bigger);

    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
}
