// Իրականցնել ֆունկցիա, որը կստանա քառակուսային մատրից 
// և գլխավոր անկյունագծի համեմատ կկատարի սիմետրիկ արտապատկերում 
// (արտապատկերումը կատարել նույն մատրիցում) ։ 
// Այսինքն մատրիցի [ i ][ j ] էլեմենտը կհսյտնվի [ j ][ i ] դիրքում։ 

#include <iostream>

const size_t MATRIX_SIZE = 4;

void symetric_change(int arr[MATRIX_SIZE][MATRIX_SIZE])
{
    for (size_t i = 0; i < MATRIX_SIZE; ++i)
    {
        for (size_t j = i + 1; j < MATRIX_SIZE; ++j)
        {
            int tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
        }
    }
}