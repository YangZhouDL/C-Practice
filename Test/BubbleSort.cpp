#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int BubbleSort()
{
	const int n = 9;
	int arr[n] = {};
	int temp;
	cout << "δ����ǰ�����ݣ�";
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
	//��������������Ԫ�ظ���-1
	for (int i = 0; i < n-1; i++)
	{
		//ÿ�ֱȽϴ���ΪԪ�ظ�����ȥ������һ
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
	cout << endl << endl << "����֮������ݣ�";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	return 0;
}