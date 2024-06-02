// Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է 
// քառակուսային մատրիցի օժանդակ անկյունագծի տարրերի գումարը։

#include <iostream>

int sum_auxiliary(int arr[5][5])
{
    int sum {};

    for (int i = 0; i < 5; ++i)
    {
        sum += arr[i][4 - i];
    }

    return sum;
}