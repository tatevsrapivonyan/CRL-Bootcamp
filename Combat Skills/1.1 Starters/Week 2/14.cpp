//Իրականացնել ռեկուրսիվ ֆունկցիա, որը կստուգի տողը պալինդրոմ է թե ոչ։

#include <string>

bool is_palindrom(const std::string& str, int first, int last)
{
    if (first >= last)
    {
        return true;
    }

    if (str[first] != str[last])
    {
        return false;
    }
    
    return is_palindrom(str, first + 1, last - 1);
}