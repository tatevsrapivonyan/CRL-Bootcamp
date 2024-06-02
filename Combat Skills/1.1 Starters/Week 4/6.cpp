// Develop a basic calculator program that performs 
// addition, subtraction, multiplication, and division.

#include <stdexcept>

int simple_calculator(int num1, int num2, char op)
{
    if (op == '+')
    {
        return num1 + num2;
    }
    
    if (op == '-')
    {
        return num1 - num2;
    }

    if (op == '/')
    {
        if (num2 == 0)
        {
            throw std::runtime_error("Division to zero.");
        }
        return num1 / num2;
    }

    if (op == '%')
    {
        if (num2 == 0)
        {
            throw std::runtime_error("Modulo to zero.");
        }
        return num1 % num2;
    }
    
    throw std::invalid_argument("Wrong operation symbol.");
}