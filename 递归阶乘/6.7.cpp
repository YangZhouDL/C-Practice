#include <stdio.h>
int jc(int n);
void main()
{
	int n,fn;
	do
	{
		printf("������һ����������");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("�������\n");
		}
	} while (n<=0);
	fn = jc(n);
	printf("%d�Ľ׳�Ϊ%d\n", n, fn);
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