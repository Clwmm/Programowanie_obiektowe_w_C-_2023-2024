// Mateusz Kałwa

#include <iostream>
#include <stack>

template<typename S> typename S::value_type sum(S s) {
    typename S::value_type total; 
    while(!s.is_empty())
        total+=s.pop();
  return total;
}

template<typename T = int , size_t N = 100> 
class Stack 
{
private:	
    T _rep[N];
    size_t _top;
public:
    typedef T value_type;
    Stack():_top(0) {};

    void push(T val) 
    {
        _rep[_top++]=val;
    }
    T pop()
    {
        return _rep[--_top];
    }
    bool is_empty() const     
    {
        return (_top==0);
    } 
};

auto main() -> int 
{
    Stack<double,10> sx;
    sx.push(3.14);
    sx.push(2.71);

    std::cout << sum(sx) << std::endl;
}
