#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> part_1(n1);
    std::vector<int> part_2(n2);

    for (int i = 0; i < n1; ++i)
    {
        part_1[i] = arr[left + i];
    }

    for (int i = 0; i < n2; ++i)
    {
        part_2[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (part_1[i] <= part_2[j])
        {
            arr[k] = part_1[i];
            ++i;
        }
        else
        {
            arr[k] = part_2[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
    {
        arr[k] = part_1[i];
        ++i;
        ++k;
    }

    while (j < n2)
    {
        arr[k] = part_2[j];
        ++j;
        ++k;
    }
}

void merge_sort(std::vector<int>& arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}