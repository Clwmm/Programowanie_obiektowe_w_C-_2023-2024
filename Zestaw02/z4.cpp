#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

class SequenceGen {
private:
    int currentValue;
public:
    SequenceGen() : currentValue(1) {}
    int operator()() {
        int value = currentValue;
        currentValue += 2;
        return value;
    }
};
auto main() -> int {
    using namespace std::placeholders;

    std::vector<int> numbers(20);

    // Creating generator and adding 20 numbers to vector with generator() method
    SequenceGen generator;
    std::generate_n(numbers.begin(), 20, generator);

    // Finding number that is greater than 4 in vector using bind with placeholder::_1 for numbers in vector
    auto it = std::find_if(numbers.begin(), numbers.end(), std::bind(std::greater<int>(), _1, 4));
    
    if (it != numbers.end())
        std::cout << "First greater than 4: " << *it << std::endl;
    else
        std::cout << "Didn't find number greater than 4" << std::endl;

    for (auto x : numbers)
        std::cout << x << "\t";
    std::cout << std::endl;
}