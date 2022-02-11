#include "Ellipse.h"
#include<iostream>
#include"acllib.h"
using namespace std;
Ellipse::Ellipse(int x, int y, int width, int height):CShape(x,y,width,height)
{

}
Ellipse::~Ellipse(void)
{

}
void Ellipse::DrawShape()
{
	setPenWidth(2);
	setPenColor(BLACK);
	setBrushColor(WHITE);
	ellipse(x, y, x + width, y + height);
}