#include "point.hpp"
#include <initializer_list>

Point::Point(std::initializer_list<int> l) {
    x = *(l.begin());
    y = *(l.begin() + 1);
}

point2d::point2d(Point const &p) : x(p.x), y(p.y) {}

auto print(point2d const &p) {}
auto draw(Point) {}

int main() {
    print(Point{});
    print(static_cast<point2d>(Point{}));
    draw(Point(point2d{0, 0}));
    Point p1(0);
    Point p2{0};
    Point p3 = Point{0};
    // Point p = 0;
    Point p = {0}; // только std::initializer_list или неявный конструктор

    // draw(2);
}
