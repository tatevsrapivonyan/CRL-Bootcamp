#include "vector.hpp"

int main() {
    vector vec1{ 1, 2, 3, 4, 5 };

    vec1.at(4) = vec1[0] = 10;

    std::cout << vec1.at(0);

    return 0;
}