#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	//! false test
	// Point a(0, 0);
	// Point b(4, 0);
	// Point c(2, 4);
	// Point point(3, 3);

	//! true test
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point point(5, 5);

    std::cout << (bsp(a, b, c, point) ? TRUE : FALSE) << std::endl;
}