#include "film.h"
#include<iostream>
using namespace std;
int film::TotalNum = 0;
film::film()
{
	Num = 0;
}
film::~film()
{
}
void film::AddOne()
{
	Num++;
	TotalNum++;
}
void film::DisplayOne()
{
	cout << Num << endl;
}
void film::DisplayAll()
{
	cout << "总进场人数为：" << TotalNum << endl;
}
int main()
{
	film *f;
	int n, m;
	srand((unsigned)time(NULL));
	n = rand() % 20 + 1;
	cout << "共有" << n << "场" << endl;
	f = new film[n];
	for (int i = 0; i < n; ++i)
	{
		m = rand() % 100 + 10;
		for (int j = 0; j < m; ++j)
		{
			f[i].AddOne();
		}
		cout << "第" << i + 1 << "场人数：";
		f[i].DisplayOne();
	}
	film::DisplayAll();
	return 0;
}