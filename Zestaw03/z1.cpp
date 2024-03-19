// Mateusz Kałwa

#include <iostream>
#include <string.h>
#include <stdio.h>

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T* max(T* a, T* b)
{
    return ((*a) > (*b)) ? a : b;
}

template <typename T>
T max(T* data, size_t n)
{
    T _max = data[0];
    for (size_t i = 0; i < n; ++i)
        if (data[i] > _max) _max = data[i];
    return _max;
}

template<> char* max<char *>(char* a, char* b)
{
    return (strcmp(a, b) > 0) ? a : b;
}

template<> const char* max<const char *>(const char* a, const char* b)
{
    return (strcmp(a, b) > 0) ? a : b;
}

template<typename T> const T* max(T* a, const T* b)
{
    return (*a) > (*b) ? a : b;
}

struct TempStruct
{
    int a = 0;
    TempStruct(int a = 0) : a(a) {}

    friend bool operator<(const TempStruct& l, const TempStruct& r)
    {
        return l.a < r.a;
    }

    friend bool operator>(const TempStruct& l, const TempStruct& r)
    {
        return l.a > r.a;
    }
};

auto main() -> int
{
    using Ts = TempStruct;

    Ts a(5);
    Ts b(10);
    auto c = max(a, b);
    std::cout << c.a << std::endl;
    
    Ts* d = new Ts(15);
    Ts* e = new Ts(11);
    auto f = max(d, e);
    std::cout << f->a << std::endl;

    Ts* arr = new Ts[3]();
    arr[0].a = 18;
    arr[1].a = 19;
    arr[2].a = 21;
    auto g = max(arr, 3);
    std::cout << g.a << std::endl;

    char h[] = "help";
    char i[] = "me";
    auto j = max(h, i);
    std::cout << j << std::endl;

    const char* k = "ghost";
    const char* l = "rider";
    auto m = max(k, l);
    std::cout << m << std::endl;

    char n[] = "toyota";
    const char* o = "supra";
    auto p = max(n, o);
    std::cout << p << std::endl;
}