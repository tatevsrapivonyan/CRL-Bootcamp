//Գրել ծրագիր, որը կգտնի NxM չափանի մատրիցի մեծագույն արժեքը և կտպի էկրանին։

#include <iostream>

const size_t MATRIX_ROWS = 4;
const size_t MATRIX_COLUMNS = 5;

int maximum(int arr[MATRIX_ROWS][MATRIX_COLUMNS])
{
    int max {arr[0][0]};

    for (size_t i = 0; i < MATRIX_ROWS; ++i)
    {
        for (size_t j = 0; j < MATRIX_COLUMNS; ++j)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}