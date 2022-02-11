#include "NewClock.h"
#include<iostream>
using namespace std;
NewClock::NewClock(int h, int m, int s):Clock(h,m,s),morning(true)
{
	
}
void NewClock::CheckTime()
{
	if (h <= 12)
	{
		morning = true;
	}
	else
	{
		morning = false;
		h = h - 12;
	}
}
NewClock::NewClock(NewClock &c):Clock(0,0,0)
{
	int h, m, s;
	c.GetTime(h, m, s);
	SetTime(h, m, s);
	morning = c.morning;
}
NewClock::~NewClock()
{

}
void NewClock::AddOneSecond()
{
	int h, m, s;
	int h2, m2, s2;
	Clock::GetTime(h, m, s);
	Clock::AddOneSecond();
	Clock::GetTime(h2, m2, s2);
	if (h2 < h)
	{
		morning = !morning;
	}
}
void NewClock::DispTime()
{
	if (morning == true)
	{
		cout << "AM:";
	}
	else
	{
		cout << "PM:";
	}
	Clock::DispTime();
}