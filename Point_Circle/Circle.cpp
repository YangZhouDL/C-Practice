#include "Circle.h"
#include <math.h>
void Circle::SetCenter(Point c_c)
{
	C_C = c_c;
}

void Circle::SetRadius(int c_r)
{
	C_R = c_r;
}

int Circle::judge(Point p, Circle c)
{
	int flag;
	double distance = sqrt(pow((p.getPX() - c.C_C.getPX()), 2) + pow((p.getPY() - c.C_C.getPY()), 2));
	if (distance > c.C_R)
	{
		flag = 1;
	}
	else if(distance < c.C_R)
	{
		flag = -1;
	}
	else
	{
		flag = 0;
	}
	return flag;
}