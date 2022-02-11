#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Circle
{
private:
	int C_R;
	Point C_C;
public:
	void SetCenter(Point c_c);
	void SetRadius(int c_r);
	int judge(Point p, Circle c);	
};

