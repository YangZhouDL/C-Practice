#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

int main()
{
	int C_R = 10, C_X = 10, C_Y = 0;
	int P_X = 10, P_Y = 11;
	int flag;
	Circle c;
	Point p,c_c;
	p.initP(P_X, P_Y);
	c_c.initP(C_X, C_Y);
	c.SetCenter(c_c);
	c.SetRadius(C_R);
	flag = c.judge(p, c);
	if (flag == 1)
	{
		cout << "点在圆外" << endl;
	}
	else if (flag == -1)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆上" << endl;
	}
	return 0;
}