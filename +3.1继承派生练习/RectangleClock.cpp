#include "RectangleClock.h"
#include<iostream>
using namespace std;
RectangleClock::RectangleClock(int x, int y, int width, int height)
{

}
RectangleClock::RectangleClock(int h, int m, int s, int x, int y, int width, int height)
{

}
RectangleClock::~RectangleClock(void)
{

}
void RectangleClock::DispTime()
{
	DrawShape();
	DrawTick(h, m, s);
}