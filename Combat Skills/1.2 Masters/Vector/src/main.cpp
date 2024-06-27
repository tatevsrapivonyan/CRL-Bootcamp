#include "vector.hpp"

int main() {
    vector vec1{ 1, 2, 3, 4, 5 };

    vec1.at(4) = vec1[0] = 10;
    std::cout << vec1.size() << " ";
    vec1.pop_back();
    vec1.clear();
    
    std::cout << vec1.size();

    return 0;
}