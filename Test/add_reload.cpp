#include <iostream>
using namespace std;
class human
{
public:
	int m_a, m_b;
	human(int a, int b) :m_a(a), m_b(b) {};
	human addHuman(human& h);
	/*human operator+(human& h);*/
	~human() { cout << "这是析构函数" << endl; };
};

human human::addHuman(human& h)
{
	this->m_a += h.m_a;
	this->m_b += h.m_b;
	return *this;
}

//human human::operator+(human& h)
//{
//	this->m_a +=
//  h.m_a;
//	this->m_b += h.m_b;
//	return *this;
//}

human operator+(human& h1, human& h2)
{
	human temp(0, 0);
	temp.m_a = h1.m_a + h2.m_a;
	temp.m_b = h1.m_b + h2.m_b;
	return temp;
}

int add_reload()
{
	human h1(10,10);
	human h2(5, 5);
	/*human h3=h2.addHuman(h1);
	cout << "h3 m_a=" << h3.m_a << endl;
	cout << "h3 m_b=" << h3.m_b << endl;
	human h4 = h2.operator+(h1);
	cout << "h4 m_a=" << h4.m_a << endl;
	cout << "h4 m_b=" << h4.m_b << endl;*/
	human h4 = operator+(h1,h2);
	cout << "h4 m_a=" << h4.m_a << endl;
	cout << "h4 m_b=" << h4.m_b << endl;
	human h5 = h1 + h2;
	cout << "h5 m_a=" << h5.m_a << endl;
	cout << "h5 m_b=" << h5.m_b << endl;
	return 0;
}