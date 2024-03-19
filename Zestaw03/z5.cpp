// Mateusz Kałwa

#include <iostream>
#include <set>
#include <functional>

int main() {
    std::set<int, std::greater<int>> decreasingSet;

    decreasingSet.insert(10);
    decreasingSet.insert(30);
    decreasingSet.insert(20);
    decreasingSet.insert(50);
    decreasingSet.insert(40);

    for (const auto& num : decreasingSet)
        std::cout << num << "\t";

    std::cout << std::endl;

    return 0;
}