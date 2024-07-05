#include <cassert>
#include <iostream>
#include "vector.hpp"

void test_default_constructor() {
    vector v;
    assert(v.size() == 0);
    assert(v.capacity() == 0);
    assert(v.is_empty());
}

void test_size_constructor() {
    vector v(10);
    assert(v.size() == 10);
    assert(v.capacity() == 10);
}

void test_initializer_list_constructor() {
    vector v = {1, 2, 3, 4, 5};
    assert(v.size() == 5);
    assert(v.capacity() == 5);
    for (size_t i = 0; i < v.size(); ++i) {
        assert(v[i] == i + 1);
    }
}

void test_copy_constructor() {
    vector v1 = {1, 2, 3, 4, 5};
    vector v2 = v1;
    assert(v2.size() == 5);
    assert(v2.capacity() == 5);
    for (size_t i = 0; i < v2.size(); ++i) {
        assert(v2[i] == i + 1);
    }
}

void test_move_constructor() {
    vector v1 = {1, 2, 3, 4, 5};
    vector v2 = std::move(v1);
    assert(v2.size() == 5);
    assert(v2.capacity() == 5);
    assert(v1.size() == 0);
    assert(v1.capacity() == 0);
    assert(v1.is_empty());
}

void test_assignment_operator() {
    vector v1 = {1, 2, 3, 4, 5};
    vector v2;
    v2 = v1;
    assert(v2.size() == 5);
    assert(v2.capacity() == 5);
    for (size_t i = 0; i < v2.size(); ++i) {
        assert(v2[i] == i + 1);
    }
}

void test_move_assignment_operator() {
    vector v1 = {1, 2, 3, 4, 5};
    vector v2;
    v2 = std::move(v1);
    assert(v2.size() == 5);
    assert(v2.capacity() == 5);
    assert(v1.size() == 0);
    assert(v1.capacity() == 0);
    assert(v1.is_empty());
}

void test_push_back() {
    vector v{ 1 };
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //assert(v.size() == 3);
    std::cout << v[0] << std::endl;
    //assert(v[0] == 1);
    //assert(v[1] == 2);
    //assert(v[2] == 3);
}

void test_pop_back() {
    vector v = {1, 2, 3, 4, 5};
    v.pop_back();
    assert(v.size() == 4);
    assert(v[3] == 4);
}

void test_insert() {
    vector v = {1, 2, 3, 4, 5};
    v.insert(2, 99);
    // assert(v.size() == 6);
    // assert(v[2] == 99);
    // assert(v[3] == 3);
}

void test_erase() {
    vector v = {1, 2, 3, 4, 5};
    v.erase(2);
    assert(v.size() == 4);
    assert(v[2] == 4);
}

void test_clear() {
    vector v = {1, 2, 3, 4, 5};
    v.clear();
    assert(v.size() == 0);
    assert(v.capacity() == 0);
    assert(v.is_empty());
}

int main() {
    test_default_constructor();
    test_size_constructor();
    test_initializer_list_constructor();
    test_copy_constructor();
    test_move_constructor();
    test_assignment_operator();
    test_move_assignment_operator();
    test_push_back();
    test_pop_back();
    test_insert();
    test_erase();
    test_clear();
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
