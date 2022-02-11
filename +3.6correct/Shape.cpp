#include "Shape.h"
Shape::Shape(int x, int y, int w, int h)
{
	this->x = x;
	this->y = y;
	width = w;
	height = h;
}
Shape::~Shape()
{

}
void Shape::GetShapeData(int& x, int& y, int& w, int& h)
{
	x = this->x;
	y = this->y;
	w = width;
	h = height;
}