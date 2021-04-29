/**
 * Классы для точек на плоскости
 */
#include <initializer_list>
struct Point;

/// 2d point
/*!
 * Хранит две координаты как числа с плавающей запятой
 */
struct point2d {
    /// абсцисса
    float x;
    float y; ///< ордината
    /**
     * \brief Конструтор, принимающий числа
     *
     * \param x абсцисса
     * \param y ордината
     */
    point2d(float x, float y) : x(x), y(y) {}
    explicit point2d(Point const &p);
};

struct Point {
    int x = 0, y = 0;
    explicit Point(int x = 0, int y = 0) : x{x}, y(y) {}
    explicit Point(point2d const &p) : x(p.x), y(p.y) {} // not x{p.x}
    /*explicit*/ operator point2d() const {
        return point2d{float(x), float(y)};
    }
    Point(std::initializer_list<int> l);
};
