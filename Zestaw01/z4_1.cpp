// Mateusz Kałwa

#include <iostream>

template <typename T>
struct K {
    T value;
};

template <template<typename> class C, typename T>
void f(C<T> arg) {
    std::cout << "Argument value: " << arg.value << std::endl;
}

int main() {
    K<int> k;
    k.value = 10;

    f(k);

    return 0;
}