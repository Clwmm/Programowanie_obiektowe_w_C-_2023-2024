#include <iostream>
#include <iterator>

template<typename InputIterator>
typename std::iterator_traits<InputIterator>::value_type accumulate(InputIterator first, InputIterator last) {
    typename std::iterator_traits<InputIterator>::value_type sum = std::iterator_traits<InputIterator>::value_type();
    for (InputIterator it = first; it != last; ++it) {
        sum += *it;
    }
    return sum;
}

int main() {
    // Przykładowe użycie
    std::string arr[] = { "1", "2", "3", "4", "5"};
    std::cout << "Suma elementow: " << accumulate(std::begin(arr), std::end(arr)) << std::endl;

    return 0;
}