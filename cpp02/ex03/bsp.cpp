#include "Point.hpp"

float triangleArea(Point const a,Point const b, Point const c){
	Fixed aX = a.getAxisX();
	Fixed aY = a.getAxisY();
	Fixed bX = b.getAxisX();
	Fixed bY = b.getAxisY();
	Fixed cX = c.getAxisX();
	Fixed cY = c.getAxisY();
	return fabs((aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)).toFloat() / 2.0f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
	float abc = triangleArea(a, b, c);
	float abp = triangleArea(a, b, point);
	float acp = triangleArea(a, c, point);
	float bcp = triangleArea(b, c, point);
	return (abc == (abp + acp + bcp)) ? true : false;
}

