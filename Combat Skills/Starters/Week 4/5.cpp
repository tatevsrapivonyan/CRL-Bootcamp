// Write a program to solve a quadratic equation of the form ax^2 + bx + c = 0.

#include <cmath>
#include <stdexcept>

std::pair<double, double> roots(int a, int b, int c)
{
    if (a == 0)
    {
        return {-c/b, -c/b};
    }

    int det = b * b - 4 * a * c;
    if (det < 0)
    {
        throw std::invalid_argument("This equation does not have roots!");
    }

    double root1 = (-b + std::sqrt(det)) / (2 * a);
    double root2 = (-b - std::sqrt(det)) / (2 * a);

    return {root1, root2};
}