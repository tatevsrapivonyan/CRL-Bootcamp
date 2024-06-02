// Տրված է ամբողջ թվերի սորտավորված զանգված, որում բոլոր էլեմենտները կրկնվում են, բացի մեկից։ 
// Իրականացնել ալգորիթմ, որը կգտնի միակ էլեմենտը O(logn) ժամանակում:

#include <iostream>

int find_unique(int arr[], size_t size, size_t left, size_t right)
{
    if (left < right)
    {
        size_t mid = left + (right - left) / 2;

        if (mid % 2 == 0) 
        {
            if (arr[mid] == arr[mid + 1])
            {
                return find_unique(arr, size, mid + 2, right);
            }
            else 
            {
                return find_unique(arr, size, left, mid);
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                return find_unique(arr, size, mid + 1, right);
            }
            else
            {
                return find_unique(arr, size, left, mid);
            }
        }
    }
    return arr[left];
}