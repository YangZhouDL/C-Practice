#include "Rectangle.h"
#include<iostream>
#include"acllib.h"
using namespace std;
Rectangle::Rectangle(int x, int y, int w, int h)
{

}
Rectangle::~Rectangle(void)
{

}
void Rectangle::DrawShape()
{
	setPenWidth(2);
	setPenColor(BLACK);
	setBrushColor(WHITE);
	rectangle(x, y, x + width, y + height);
}