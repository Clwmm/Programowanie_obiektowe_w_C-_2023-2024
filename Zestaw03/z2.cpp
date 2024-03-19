// Mateusz Kałwa

#include <iostream>

template<typename T, typename U> T convert(U u) 
{
    return static_cast<T>(u);
}

template<> int convert<int, double>(double u)
{
    return static_cast<int>(u);
}

template<> double convert<double, double>(double u)
{
    return static_cast<double>(u);
}

auto main() -> int
{
    auto a = convert<int>(3.14);
    std::cout << a << std::endl;

    auto b = convert<double>(2.71);
    std::cout << b << std::endl;
}