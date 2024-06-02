// Գրել ծրագիր, որը քառակուսային մատրիցը շրջում է 180 աստիճան։

#include <iostream>

const size_t MATRIX_SIZE = 4;

void reverse_matrix(int arr[MATRIX_SIZE][MATRIX_SIZE])
{
    for (size_t i = 0; i < MATRIX_SIZE / 2; ++i)
    {
        for (size_t j = 0; j < MATRIX_SIZE; ++j)
        {
            int tmp = arr[i][j];
            arr[i][j] = arr[MATRIX_SIZE - 1 - i][MATRIX_SIZE - 1 - j];
            arr[MATRIX_SIZE - 1 - i][MATRIX_SIZE - 1 - j] = tmp;
        }
    }
}