#pragma once
#include"Clock.h"
#include"Shape.h"
class RectangleClock:
	public Clock, public Shape
{
public:
	RectangleClock(int x, int y, int w, int h);
	RectangleClock(int z, int h, int m, int s, int x, int y, int width, int height);
	virtual ~RectangleClock();
	void DispTime();
};

