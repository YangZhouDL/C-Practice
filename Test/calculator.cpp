#include <iostream>
using namespace std;

class baseCalculator
{
public:
	int num1, num2;
	virtual int Calculate()		//虚函数也要有返回值，但返回值不影响结果
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
	baseCalculator *bc = new addCalculator;		//父类的指针或引用指向子类对象
	bc->num1 = 10;
	bc->num2 = 20;
	cout << "num1 + num2 = " << bc->Calculate() << endl;
	delete bc;					//new和delete要成对使用

	bc = new subCalculator;		//bc仍是父类指针，只是内存被释放
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