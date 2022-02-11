#include <stdio.h>
int jc(int n);
void main()
{
	int n,fn;
	do
	{
		printf("请输入一个正整数：");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("输入错误！\n");
		}
	} while (n<=0);
	fn = jc(n);
	printf("%d的阶乘为%d\n", n, fn);
}
int jc(int n)
{
	int r=1,i;
	for (i = 1; i <= n; ++i)
	{
		r *= i;
	}
	/*if (n == 1)
	{
		r = 1;
	}
	else
	{
		r = jc(n - 1) * n;
	}*/
	return r;
}