#include <iostream>
#include <string>
using namespace std;

class Cube
{
private:
	int length, width, height;
public:
	void init(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}
	int Calculate_M()
	{
		return 2 * length * width + 2 * length * height + 2 * width * height;
	}
	int Calculate_T()
	{
		return length * width * height;
	}
	bool Compare(Cube &c)
	{
		if (length == c.length && width == c.width && height == c.height)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int Cube_class()
{
	Cube c1;
	c1.init(10, 10, 10);
	cout << "c1�����Ϊ��" << c1.Calculate_M() << endl;
	cout << "c1�����Ϊ��" << c1.Calculate_T() << endl;
	Cube c2;
	c2.init(10, 10, 11);
	bool judge = c1.Compare(c2);
	if (judge)
	{
		cout << "c1��c2���" << endl;
	}
	else
	{
		cout << "c1��c2����" << endl;
	}
	return 0;
}