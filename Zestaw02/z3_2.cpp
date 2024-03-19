#include <iostream>
#include <iterator>

template <class InputIterator, class T>
T accumulate(InputIterator first, InputIterator last, T init) {
    T total = init;
    for (; first != last; ++first)
        total += *first;
    return total;
}

int main() {
    std::string arr[] = { "1", "2", "3", "4", "5"};
    std::cout << "Suma elementow: " << accumulate(std::begin(arr), std::end(arr), std::string("")) << std::endl;

    return 0;
}