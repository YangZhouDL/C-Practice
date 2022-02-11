#include "Point.h"
Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}
Point::~Point()
{

}
int Point::GetX()
{
	return x;
}
int Point::GetY()
{
	return y;
}
void Point::SetPoint(int x, int y)
{
	this->x = x;
	this->y = y;
}

