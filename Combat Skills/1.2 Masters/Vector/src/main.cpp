#include "vector.hpp"

int main() {
    vector vec1{ 1, 2, 3, 4, 5 };

    vec1[0] = 6;

    std::cout << vec1[8];

    return 0;
}