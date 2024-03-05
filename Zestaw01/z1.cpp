// Mateusz Kałwa

#include <iostream>

template<typename T>
T maksimum(const T& a, const T& b) {
    return (a < b) ? b : a;
}

auto main() -> int {
    int liczba1 = 5, liczba2 = 10;
    std::cout << "maksimum(5, 10):\t" << maksimum(liczba1, liczba2) << std::endl;

    double liczba3 = 3.14, liczba4 = 2.718;
    std::cout << "maksimum(3.14, 2.718):\t" << maksimum(liczba3, liczba4) << std::endl;

    std::string tekst1 = "abc", tekst2 = "xyz";
    std::cout << "maksimum(\"abc\", \"xyz\"):\t" << maksimum(tekst1, tekst2) << std::endl;
}