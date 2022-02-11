#include"acllib.h"
#include"EllipseClock.h"
#include"RectangleClock.h"
#include<stdlib.h>
#include<math.h>
#include<Windows.h>
//#define RAD(x) ((x)/360.0*2*3.1415926)
EllipseClock c1(430, 30, 250, 250);
RectangleClock c2(30, 30, 250, 250);
void timerEvent(int tid)
{
	beginPaint();
	clearDevice();
	c1.AddOneSecond();
	c1.DispTime();
	c2.AddOneSecond();
	c2.DispTime();
	endPaint();
}
int Setup()
{
	initWindow("Clock", DEFAULT, DEFAULT, 800, 300);
	registerTimerEvent(timerEvent);
	startTimer(0, 1000);
	return 0;
}