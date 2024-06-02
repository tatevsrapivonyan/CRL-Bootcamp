// Իրականացնել ֆունկցիա, որը հաշվում 
// և վերադարձնում է քառակուսային մատրիցի գլխավոր անկյունագծի տարրերի գումարը։

#include <iostream>

int diagonal_sum(int arr[5][5])
{
    int sum {};

    for (size_t i = 0; i < 5; ++i)
    {
        sum += arr[i][i];
    }

    return sum;
}