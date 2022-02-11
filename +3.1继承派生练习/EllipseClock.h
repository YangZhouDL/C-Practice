#pragma once
#include"Clock.h"
#include"Ellipse.h"
class EllipseClock:
	public Clock,public Ellipse
{
public:
	EllipseClock(int x, int y, int width, int height);
	EllipseClock(int h, int m, int s, int x, int y, int width, int height);
	~EllipseClock(void);
	void DispTime();
};

