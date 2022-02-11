#include "Clock.h"
#include<iostream>
#include"acllib.h"
#include"time.h"
#include"math.h"
using namespace std;
Clock::Clock()
{
	time_t now;
	struct tm t;
	time(&now);
	localtime_s(&t,&now);
	h = t.tm_hour;
	m = t.tm_min;
	s = t.tm_sec;
	z = 8;
}
Clock::Clock(int z, int h, int m, int s)
{
	this->z = z;
	this->h = h;
	this->m = m;
	this->s = s;
}
Clock::Clock(Clock &c)
{
	z = c.z;
	h = c.h;
	m = c.m;
	s = c.s;
}
Clock::~Clock()
{

}
void Clock::SetTime(int h, int m, int s)
{
	this->h = h;
	this->m = m;
	this->s = s;
}
void Clock::GetTime(int& h, int& m, int& s)
{
	h = this->h;
	m = this->m;
	s = this->s;
}
void Clock::SetZone(int z)
{
	this->z = z;
}
int Clock::GetZone()
{
	return this->z;
}
void Clock::AddOneSecond()
{
	s++;
	if (s >= 60)
	{
		m++;
		s = 0;
		if (m >= 60)
		{
			m = 0;
			h++;
			if (h >= 12)
			{
				h = 0;
			}
		}
	}
}
void Clock::DispTime()
{
	cout << "Region:" << z << "	" << "Time:" << h << ":" << m << ":" << s << endl;
}