// Իրականացնել ֆունկցիա, որը քառակուսային մատրիցի գլխավոր և օժանդակ անկյունագծի 
// էլեմենտների արժեքները տեղերով կփոխի։

void change_diagonals_elements(int arr[5][5])
{
    for (int i = 0; i < 5; ++i)
    {
        int tmp = arr[i][i];
        arr[i][i] = arr[i][4 - i];
        arr[i][4 - i] = tmp;
    }
}