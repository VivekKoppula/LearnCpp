#include <iostream>
#include "point.h"

int main()
{

    Point p1(10, 20);
    Point p2(3, 4);
    // p1.print_info();

    // std::cout << p1 << p2 << std::endl;
    p2 << std::cout;
    // The compiler is doing the following. Uncomment this and see.
    // p2.operator<<(std::cout);
    return 0;
}