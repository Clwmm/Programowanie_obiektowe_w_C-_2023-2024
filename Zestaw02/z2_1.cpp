#include <iostream>
#include <vector>

// Polimorfizm dynamiczny

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

class Rectangle : public Shape
{
protected:
    long _ur_x;
    long _ur_y;

public:
    Rectangle(long ll_x, long ll_y, long  ur_x, long ur_y)
        : Shape(ll_x, ll_y), _ur_x(ur_x - ll_x), _ur_y(ur_y - ll_y) {};

    virtual void draw() {
        std::cerr << "rectangle : " << _x << " " << _y << " : ";
        std::cerr << _ur_x + _x << " " << _ur_y + _y << std::endl;

    }
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

void draw_shapes(const std::vector<Shape*>& vec) {
    for (auto x : vec)
        x->draw();
}

int main()
{
    std::vector<Shape*> vec;
    vec.push_back(new Circle(0, 0, 100));
    vec.push_back(new Rectangle(20, 20, 80, 80));
    vec.push_back(new Circle(10, 10, 100));
    vec.push_back(new Rectangle(20, 0, 80, 10));
    draw_shapes(vec);
}