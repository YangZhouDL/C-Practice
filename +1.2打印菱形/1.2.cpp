#include<iostream>
using namespace std;
void print(int n);
int main()
{
	int n;
	cout << "ÇëÊäÈë°ë¸ßn£º";
	cin >> n;
	print(n);
	return 0;
}
void print(int n)
{
	int i, j;
	for (i = 1; i <= n; ++i)
	{
		for (j = 0; j < n - i; ++j)
		{
			cout << " ";
		}
		for (j = 0; j < i; ++j)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			cout << " ";
		}
		for (j = 0; j < n-i; ++j)
		{
			cout << "* ";
		}
		cout << endl;
	}
}