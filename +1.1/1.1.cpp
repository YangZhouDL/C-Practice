#include<iostream>
using namespace std;
const int n = 20;
int main()
{
	int i, *p;
	p = new int[n];
	if (p == NULL)
	{
		cout << "内存分配失败！" << endl;
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			p[i] = rand() % n;
			cout << p[i] << ' ';
		}
	}
	int max, min;
	max = p[0]; min = p[0];
	for (i = 0; i < n; ++i)
	{
		if (p[i] >= max)
		{
			max = p[i];
		}
		else if (p[i] <= min)
		{
			min = p[i];
		}
	}
	cout << endl <<"最大值为：" << max << endl <<"最小值为："<< min << endl;
	delete []p;
	return 0;
}