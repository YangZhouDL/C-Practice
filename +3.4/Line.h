#pragma once
#include"Point.h"
class Line
{
	Point p1, p2;
public:
	Line(Point p1, Point p2);
	void Draw();
	Line(Line &L);
	void SetLine(int x1, int y1, int x2, int y2);
	void SetLine(Point p1, Point p2);
};

