#include<iostream>
using namespace std;
const int PI = 3.14;
const int *func(void);
int main()
{
	const int *q;
	q = func();
	cout << "Main():" << endl;
	cout << "q=" << q << endl;
	cout << "*q=" << *q << endl;
	const char *str = "123ABC";
	cout << "(void*)str=" << (void*)str << endl;
	cout << "str=" << str << endl;
	cout << "&PI=" << &PI << endl;
	cout << "Address of the function func()=" << func << endl;
	return 0;
}
const int *func(void)
{
	const int a = 5;
	const int *p = &a;
	cout << "a=" << a << endl;
	cout << "&a=" << &a << endl;
	cout << "p=" << p << endl;
	cout << "*p=" << *p << endl;
	return p;
}