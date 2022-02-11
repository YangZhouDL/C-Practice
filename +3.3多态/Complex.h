#pragma once
#include<iostream>
using namespace std;
class Complex
{
private:
	double re=0, im=0;
public:
	Complex(double r , double i );
	friend Complex operator +(Complex &c1,Complex &c2);
	friend ostream& operator <<(ostream &out, Complex &obj);
	friend Complex operator++(Complex &obj);
	friend Complex operator++(Complex &obj,int);
	friend Complex operator--(Complex &obj);
	friend Complex operator--(Complex &obj, int);
};

