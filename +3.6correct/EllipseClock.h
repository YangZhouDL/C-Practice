#pragma once
#include"Clock.h"
#include"Shape.h"
class EllipseClock:
	public Clock,public Shape
{
public:
	EllipseClock(int x, int y, int w, int h);
	EllipseClock(int z, int h, int m, int s, int x, int y, int width, int height);
	virtual ~EllipseClock();
	void DispTime();
};

