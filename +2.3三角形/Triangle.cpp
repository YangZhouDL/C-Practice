#include "Triangle.h"
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	Triangle a;
	float x, y, z;
	bool judge;
	float area, circle;
	do
	{
		cout << "Please in put three edges:";
		cin >> x >> y >> z;
		judge = a.Judge(x, y, z);
		if (judge == false)
		{
			cout << "Wrong input!" << endl << endl;
		}
	} while (judge==false);
	if (judge == true)
	{
		cout << endl << "Input right!" << endl;
	}
	area = a.Area(x, y, z);
	circle = a.Circle(x, y, z);
	cout << "Three edges are:"<<x<<" "<<y<<" "<<z<<endl;
	cout << "area=" << area<< endl;
	cout << "circle=" << circle << endl;
	return 0;
}
bool Triangle::Judge(float a, float b, float c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return false;
	}
	if (((a + b) <= c) || ((a + c) <= b) || ((c + b) <= a))
	{
		return false;
	}
	return true;
}
float Triangle::Area(float a, float b, float c)
{
	float area,p;
	p = (a + b + c) / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}
float Triangle::Circle(float a, float b, float c)
{
	float circle;
	circle = a + b + c;
	return circle;
}
//void Triangle::Display()
//{
//
//}
//Triangle::Triangle(float a, float b, float c)
//{
//
//}
Triangle::~Triangle()
{
}