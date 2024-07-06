#include "bitvector.hpp"
#include <iostream>
#include <cassert>

void test_default_constructor() {
    bitvector bv;
    assert(bv.count_sets() == 0);
    assert(bv.count_resets() == bv.get_size());
}

void test_size_constructor() {
    bitvector bv(10);
    assert(bv.count_sets() == 0);
    assert(bv.count_resets() == 10);
}

void test_set_and_get() {
    bitvector bv(10);
    bv.set(3);
    assert(bv.is_set(3));
    assert(!bv.is_set(4));
    assert(bv.count_sets() == 1);
    assert(bv.count_resets() == 9);
}

void test_reset() {
    bitvector bv(10);
    bv.set(5);
    bv.reset(5);
    assert(bv.is_reset(5));
    assert(bv.count_sets() == 0);
    assert(bv.count_resets() == 10);
}

void test_resetall() {
    bitvector bv(10);
    bv.set(2);
    bv.set(5);
    bv.resetall();
    assert(bv.count_sets() == 0);
    assert(bv.count_resets() == 10);
}

void test_setall() {
    bitvector bv(10);
    bv.setall();
    assert(bv.count_sets() == 10);
    assert(bv.count_resets() == 0);
}

void test_toggle() {
    bitvector bv(10);
    bv.toggle(2);
    assert(bv.is_set(2));
    bv.toggle(2);
    assert(bv.is_reset(2));
}

void test_first_set() {
    bitvector bv(10);
    bv.set(4);
    bv.set(7);
    assert(bv.first_set() == 4);
}

void test_last_set() {
    bitvector bv(10);
    bv.set(4);
    bv.set(7);
    assert(bv.last_set() == 7);
}

int main() {
    test_default_constructor();
    test_size_constructor();
    test_set_and_get();
    test_reset();
    test_resetall();
    test_setall();
    test_toggle();
    test_first_set();
    test_last_set();

    std::cout << "All tests passed!\n";
    return 0;
}
