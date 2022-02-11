#include <iostream>
using namespace std;

class A
{
friend ostream &operator<<(ostream& out, A& a);		//声明为友元函数，可访问私有成员变量
public:
	A(int a,int b):m_a(a),m_b(b){};
	~A(){};
private:
	int m_a, m_b;
};

//返回值为输出流类型，即cout的引用，可实现链式编程
ostream &operator<<(ostream &out, A &a)		//out仅是cout的别名
{
	out << "m_a=" << a.m_a << endl << "m_b=" << a.m_b << endl;
	return out;
}

int cout_reload()
{
	A a1(5, 5);
	operator<<(cout, a1);	//本质仍是函数调用
	cout << endl;
	cout << a1<<endl<<"Hello World!";			//ostream &在起作用
	return 0;
}