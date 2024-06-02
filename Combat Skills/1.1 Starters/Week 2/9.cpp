// Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է տող և վերադարձնում տողում առաջին հանդիպած մեծատառը։

char find_first_upper_case(const char* str)
{
    if (*str == '\0')
    {
        return '\0';
    }

    if (*str >= 'A' && *str <= 'Z')
    {
        return *str;
    }

    return find_first_upper_case(str + 1);
}