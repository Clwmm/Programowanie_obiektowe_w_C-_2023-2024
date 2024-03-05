// Mateusz Kałwa

#include <iostream>

template <typename T, int N>
T dot_product(const T(&vec1)[N], const T(&vec2)[N]) {
    T result = 0;
    for (int i = 0; i < N; ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}

int main() {
    int v1[3] = { 1, 2, 3 };
    int v2[3] = { 4, 5, 6 };
    double v3[3] = { 1.5, 2.5, 3.5 };
    double v4[3] = { 4.5, 5.5, 6.5 };
    short v5[3] = { 2, 6, 1 };
    short v6[3] = { 3, 8, 6 };

    std::cout << "dot_product(v1, v2): " << dot_product(v1, v2) << std::endl;
    std::cout << "dot_product(v3, v4): " << dot_product(v3, v4) << std::endl;
    std::cout << "dot_product(v5, v6): " << dot_product(v5, v6) << std::endl;

    return 0;
}