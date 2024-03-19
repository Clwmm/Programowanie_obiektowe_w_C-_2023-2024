// Mateusz Kałwa

#include <iostream>

template<typename T, int N = 100>
class Stack {
public:
    Stack() { std::cerr << "T,N" << std::endl; };
};

template<typename T>
class Stack<T, 666> {
public:
    Stack() { std::cerr << "T,666" << std::endl; };
};

template<typename T, int N>
class Stack<T*, N> {
public:
    Stack() { std::cerr << "T*,N" << std::endl; };
};

template<int N>
class Stack<double, N> {
public:
    Stack() { std::cerr << "double,N" << std::endl; };
};

template<int N>             
class Stack<int*, N> {
public:
    Stack() { std::cerr << "int *,N" << std::endl; };
};

template<>                  
class Stack<double, 666> {
public:
    Stack() { std::cerr << "double,666" << std::endl; };
};

template<>                  
class Stack<double*, 44> {
public:
    Stack() { std::cerr << "double *,44" << std::endl; };
};

auto main() -> int
{
    Stack<int, 20> s0;
    Stack<int, 666> s1;
    Stack<double*, 30> s2;
    Stack<double, 30> s3;
    Stack<double*, 44> s4;
    Stack<int*, 20> s5;
    Stack<double, 666> s6;
}