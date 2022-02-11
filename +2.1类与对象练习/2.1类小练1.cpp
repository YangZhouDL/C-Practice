#include<iostream>
using namespace std;
class IntArray{
private:
	int *data;
	int size;
	int GetNum(int f);
public:
	void SetArray(int len);	
	int SetValue(int pos,int v);
	int GetMax();
	int GetMin();
	void End();
};
int main()
{
	IntArray array;
	int i, max, min, v;
	const int n = 5;	
	array.SetArray(n);	
	cout << "Please input " << n << " numbers:";
	for (i = 0; i < n; ++i)
	{
		cin >> v;
		array.SetValue(i, v);
	}
	max = array.GetMax();
	min = array.GetMin();
	cout << "Maximum:" << max << endl;
	cout << "Minimum:" << min << endl;
	array.End();
	return 0;
}
int IntArray::GetNum(int f)
{
	int i,max,min;
	if (f == 0)
	{
		max = data[0];
		for (i = 0; i < size; ++i)
		{
			if (data[i] >= max)
			{
				max = data[i];
			}
		}
		return max;
	}
	else if (f == 1)
	{
		min = data[0];
		for (i = 0; i < size; ++i)
		{
			if (data[i] <= min)
			{
				min = data[i];
			}
		}
		return min;
	}
}
void IntArray::SetArray(int len)
{
	size = len;
	data = new int[len];	
}
int IntArray::SetValue(int pos, int v)
{
	if (pos < 0 || pos >= size)
	{
		return -1;
	}
	else
	{
		data[pos] = v;
		return 0;
	}
}
int IntArray::GetMax()
{
	int max = GetNum(0);
	return max;
}
int IntArray::GetMin()
{
	int min = GetNum(1);
	return min;
}
void IntArray::End()
{
	if (data != NULL)
	{
		delete []data;
	}
}