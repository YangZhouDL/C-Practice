#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int BubbleSort()
{
	const int n = 9;
	int arr[n] = {};
	int temp;
	cout << "未排序前的数据：";
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << "  ";
	}
	cout << endl << endl << "**************";
	for (int i = 0; i < n; ++i)
	{
		cout << "****";
	}
	//排序总轮数等于元素个数-1
	for (int i = 0; i < n-1; i++)
	{
		//每轮比较次数为元素个数减去轮数加一
		for (int j = 0; j < n-(i+1); j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}		
	}
	cout << endl << endl << "排序之后的数据：";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	return 0;
}