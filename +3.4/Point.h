#pragma once
class Point
{
protected:
	int x, y;
public:
	Point(int x,int y);
	virtual ~Point();
	int GetX();
	int GetY();
	void SetPoint(int x, int y);
};

