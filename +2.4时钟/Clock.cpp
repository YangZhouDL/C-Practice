#include "Clock.h"
#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{	
	int a, b, c;
	cout << "Please input hour/minute/second:";
	cin >> a >> b >> c;
	Clock c1(0, 0, 0);
	Clock &c2 = c1;
	c1.SetTime(a, b, c);
	cout << "Clock one:";
	c1.ShowTime();
	cout << endl << "Clock two:";
	c2.ShowTime();
	while (1)
	{
		system("cls");
		cout << "Clock one:";
		c1.AddSecond();
		c1.ShowTime();
		cout <<endl<< "Clock two:";
		c2.AddSecond();
		c2.ShowTime();
		Sleep(1000);
	}
	return 0;
}
Clock::Clock(int x, int y, int z)
{
	h = x; m = y; s = z;
}
void Clock::SetTime(int x, int y, int z)
{
	h = x; m = y; s = z;
}
void Clock::ShowTime()
{
	cout << h << ":" << m << ":" << s;
}
void Clock::AddSecond()
{	
	++s;
	if (s == 60)
	{
		s = 0;
		m++;
	}
	if (m == 60)
	{
		m = 0;
		h++;
	}
	if (h == 24)
	{
		s = 0;
		m = 0;
		h = 0;
	}	
}