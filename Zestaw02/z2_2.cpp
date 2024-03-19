#include <iostream>
#include <vector>

// Polimorfizm statyczny

class Shape
{
protected:
    long int _x;
    long int _y;

public:
    Shape(long x, long y) :_x(x), _y(y) {};

    long get_x() const { return _x; }
    long get_y() const { return _y; }

    void move(long dx, long dy) { _x += dx; _y += dy; };
    virtual void draw() = 0;

    virtual ~Shape() {};
};

class Circle : public Shape
{
protected:
    long _r;

public:
    Circle(long x, long y, long r)
        : Shape(x, y), _r(r) {}

    virtual void draw() {
        std::cerr << "Circle : " << _x << " " << _y << " : " << _r << std::endl;
    }
};

template<typename T> 
void draw_template(T table[], size_t n) {
    for (size_t i = 0; i < n; ++i)
        table[i].draw();
}

class Drawable {
public:
    void draw() { std::cerr << "hello world!" << std::endl; }
};

int main() {
    Drawable table_d[1] = { Drawable() };
    Circle   table_c[2] = { Circle(5, 10,10),Circle(7, 0,50) };

    draw_template(table_d, 1);
    draw_template(table_c, 2);
}
