#pragma once
#include <iostream>
#include "Fixed.hpp"
#define TRUE GREEN "true" RESET
#define FALSE RED "false" RESET

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	~Point();
	Point(const float& x , const float& y);
	Point(const Point& copy);
	Point& operator=(const Point& other);
	const Fixed& getAxisX() const ;
    const Fixed& getAxisY() const ;
};

float triangleArea(Point const a,Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const point);


