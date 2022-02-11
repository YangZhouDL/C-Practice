#pragma once
#define rad 3.1415926/180
class Shape
{
private:
	int x, y, width, height;
public:
	Shape(int x, int y, int w, int h);
	virtual ~Shape();
	void GetShapeData(int& x, int& y, int& w, int& h);
};