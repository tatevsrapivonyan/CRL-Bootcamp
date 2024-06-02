// Իրականացնել ռեկուրսիվ ֆունկցա, որը տրված x թվի համար կհաշվի նրա n աստիճանը։

double pow(int x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    if (n > 0)
    {
        return x * pow (x, n - 1);
    }
    return 1.0/x * pow(x, n + 1);
}