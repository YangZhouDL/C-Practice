#pragma once
#include"Clock.h"
#include"Ellipse.h"
class RectangleClock:
	public Clock, public Ellipse
{
	RectangleClock(int x, int y, int width, int height);
	RectangleClock(int h, int m, int s, int x, int y, int width, int height);
	~RectangleClock(void);
	void DispTime();
};

