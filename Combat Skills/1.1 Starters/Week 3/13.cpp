// Write a function that takes a vector of doubles by reference and calculates the average value.

#include <iostream>
#include <vector>

double doubles_sum(const std::vector<double>& arr)
{
    double average {};

    for (auto& a : arr)
    {
        average += a;
    }

    average /= arr.size();

    return average;
}