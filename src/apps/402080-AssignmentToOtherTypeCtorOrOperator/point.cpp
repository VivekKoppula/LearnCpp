#include "point.h"
#include "number.h"

Point::Point(double x, double y) : m_x(x), m_y(y)
{
}

// Point::Point(const Number &n)
// {
//     std::cout << "Option 1: Point Constructor from Number called..." << std::endl;
//     m_x = m_y = n.get_wrapped_int();
// }

void Point::operator=(const Number &n)
{
    std::cout << "Option 2: Point Copy assignment operator from Number called..." << std::endl;
    m_x = m_y = n.get_wrapped_int();
}
