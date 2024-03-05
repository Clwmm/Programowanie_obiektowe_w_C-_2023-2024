// Mateusz Kałwa

#include <iostream>
#include <stack>

template<typename T>
struct StackOperations {
    typedef T value_type;

    static T sum(const std::stack<T>& s) {
        T total = T();
        std::stack<T> tempStack = s;

        while (!tempStack.empty()) {
            total += tempStack.top();
            tempStack.pop();
        }

        return total;
    }
};

int main() {
    std::stack<std::string> stack;
    stack.push("d");
    stack.push("c");
    stack.push("b");
    stack.push("a");

    std::cout << "Sum of elements on the stack: " << StackOperations<std::string>::sum(stack) << std::endl;

    return 0;
}