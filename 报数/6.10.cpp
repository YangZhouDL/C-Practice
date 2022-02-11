#include <stdio.h>
#include <stdlib.h>
void baoshu(int n, int k,int *data);
void main()
{
	int n, k, i;
	printf("请输入人数及出场的报号数：");
	scanf_s("%d%d", &n, &k);
	int *r = (int*)malloc((n + 1) * sizeof(int));
	baoshu(n, k, r);
	for (i = 0; i < n + 1; ++i)
	{
		if (r[i] == 1)
		{
			printf("幸存人员为%d号\n", i);
		}
	}	
}
void baoshu(int n, int k,int *data)
{
	/*int *data = (int*)malloc((n + 1) * sizeof(int));*/
	int i, j, m;
	/*if (data == NULL)
	{
		return -1;
	}*/
	for (i = 1; i < n + 1; ++i)
	{
		data[i] = 1;
	}
	j = n/2; i = 1; m = 1;
	while (j>1)
	{
		while (data[m]==0)
		{
			++m;
			m %= n;
		}
		if (i == k)
		{
			data[m] = 0; 
			i = 1; 
			--j; 
			m++;
			m %= n;
			continue;
		}
		++i;
		++m;
		m %= n;
	}
	/*for (i = 1; i < n + 1; ++i)
	{
		if (data[i] == 1)
		{
			return i;
		}		
	}
	return -1;*/
	/*return *data;*/
}