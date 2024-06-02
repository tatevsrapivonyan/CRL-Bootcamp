// Իրականացնել ռեկուրսիվ ֆունկցիա, որը տրված տողը կշրջի։

#include <string>

void reverse_recursive(std::string& str, size_t start, size_t end)
{
    if (start >= end)
    {
        return;
    }

    char tmp = str[start];
    str[start] = str[end];
    str[end] = tmp;
    reverse_recursive(str, start + 1, end - 1);
}