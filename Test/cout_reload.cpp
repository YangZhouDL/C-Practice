#include <iostream>
using namespace std;

class A
{
friend ostream &operator<<(ostream& out, A& a);		//����Ϊ��Ԫ�������ɷ���˽�г�Ա����
public:
	A(int a,int b):m_a(a),m_b(b){};
	~A(){};
private:
	int m_a, m_b;
};

//����ֵΪ��������ͣ���cout�����ã���ʵ����ʽ���
ostream &operator<<(ostream &out, A &a)		//out����cout�ı���
{
	out << "m_a=" << a.m_a << endl << "m_b=" << a.m_b << endl;
	return out;
}

int cout_reload()
{
	A a1(5, 5);
	operator<<(cout, a1);	//�������Ǻ�������
	cout << endl;
	cout << a1<<endl<<"Hello World!";			//ostream &��������
	return 0;
}