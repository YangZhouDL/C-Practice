#include <iostream>
using namespace std;

class baseCalculator
{
public:
	int num1, num2;
	virtual int Calculate()		//�麯��ҲҪ�з���ֵ��������ֵ��Ӱ����
	{
		return num1 + num2;
	}
};

class addCalculator:public baseCalculator
{
public:
	int Calculate()
	{
		return num1 + num2;
	}
};

class subCalculator :public baseCalculator
{
public:
	int Calculate()
	{
		return num1 - num2;
	}
};

void test()
{
	/*baseCalculator bc;
	bc.num1 = 10;
	bc.num2 = 20;*/
	baseCalculator *bc = new addCalculator;		//�����ָ�������ָ���������
	bc->num1 = 10;
	bc->num2 = 20;
	cout << "num1 + num2 = " << bc->Calculate() << endl;
	delete bc;					//new��deleteҪ�ɶ�ʹ��

	bc = new subCalculator;		//bc���Ǹ���ָ�룬ֻ���ڴ汻�ͷ�
	bc->num1 = 10;
	bc->num2 = 20;
	cout << "num1 - num2 = " << bc->Calculate() << endl;
	delete bc;
}

int calculator()
{
	test();
	return 0;
}