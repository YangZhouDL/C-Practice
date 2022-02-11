#include "Line.h"
#include<iostream>
using namespace std;
Line::Line(Point p1, Point p2):p1(p1),p2(p2)
{

}
void Line::Draw()
{
	cout << "This Line:" << "Start Point" << "(" << p1.GetX() << "," << p1.GetY() << ")" << "   " << "End Point" << "(" << p2.GetX() << "," << p2.GetY() << ")" << endl << endl;
}
Line::Line(Line &L):p1(L.p1),p2(L.p2)
{

}
void Line::SetLine(int x1, int y1, int x2, int y2)
{
	p1.SetPoint(x1, y1);
	p2.SetPoint(x2, y2);
}
void Line::SetLine(Point p3, Point p4)
{
	p1.SetPoint(p3.GetX(), p3.GetY());
	p2.SetPoint(p4.GetX(), p4.GetY());
}