// Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար ռեկուրսիվ տարբերակով։

#include <iostream>

int binary_search_recursive(int arr[], size_t size, size_t left, size_t right, int target)
{
    if (left <= right)
    {
        size_t mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] > target)
        {
            return binary_search_recursive(arr, size, left, mid - 1, target);
        }
        else 
        {
            return binary_search_recursive(arr, size, mid + 1, right, target);
        }
    }
    return -1;
}