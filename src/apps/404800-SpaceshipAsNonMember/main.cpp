#include <iostream>
#include "number.h"

class Point
{
public:
    Point(double x, double y)
        : m_x{x}, m_y{y} {};

    // Type conversion operator from Number to Point
    operator Number() const
    {
        std::cout << "Converting Point [ x : " << m_x << ", y: " << m_y << "] to number " << m_x << std::endl;
        return Number(static_cast<int>(m_x));
    }

private:
    double m_x{};
    double m_y{};
};

int main()
{

    Point p1{10, 10};
    Point p2{20, 20};

    std::cout << std::boolalpha;
    bool result = (p1 > p2);
    // std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p1 > p2 : " << result << std::endl;

    return 0;
}