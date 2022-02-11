#include "Complex.h"
Complex::Complex(double r , double i ):re(r),im(i)
{
	
}
Complex operator +(Complex &c1, Complex &c2)
{
	Complex t(0,0);
	t.re = c1.re + c2.re;
	t.im = c1.im + c2.im;
	return t;
}
ostream& operator <<(ostream &out, Complex &obj)
{
	out << obj.re << "+" << obj.im << "j";
	return out;
}
Complex operator++(Complex &obj)
{
	obj.re++; obj.im++;
	return obj;
}
Complex operator++(Complex &obj, int)
{
	Complex temp=obj;
	obj.im++; obj.re++;
	return temp;
}
Complex operator--(Complex &obj)
{
	obj.re--; obj.im--;
	return obj;
}
Complex operator--(Complex &obj, int)
{
	Complex temp = obj;
	obj.im--; obj.re--;
	return temp;
}