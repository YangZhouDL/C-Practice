#include"Complex.h"
#include<iostream>
using namespace std;
int main()
{
	Complex c1(3, 5), c2(6, 7);
	Complex c3 = c1 + c2;
	cout << c1 << "  " << c2 << "  " << c3 << endl;
	Complex c4 = c1++;
	Complex c5 = ++c1;
	Complex c6 = c2--;
	Complex c7 = --c2;
	cout << c4 << "  " << c5 << "  " << c6 << "  " <<c7 <<  endl;
	return 0;
}