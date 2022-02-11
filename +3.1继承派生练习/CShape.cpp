#include "CShape.h"
#include<iostream>
#include"acllib.h"
#include<math.h>
using namespace std;
CShape::CShape(int x, int y, int width, int height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}
CShape::~CShape(void)
{

}
void CShape::GetShapeData(int &x, int &y, int &width, int &height)
{
	x = this->x;
	y = this->y;
	width = this->width;
	height = this->height;
}
void CShape::DrawTick(int h, int m, int s)
{
	int ox = (x + (x + width)) / 2;
	int oy = (y + (y + height)) / 2;
	int min = width < height ? width : height;
	int hl = min / 4 - min / 7;
	int ml = min / 3 - min / 6;
	int sl = min / 2 - min / 5;
	int i;
}