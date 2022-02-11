#include <stdio.h>
int comp(int a, int b);
int main()
{
	int (*p)(int c, int d);
	int x, y,z;
	printf("请输入两个数：");
	scanf_s("%d%d", &x, &y);
	p = comp;
	z = (*p)(x, y);
	printf("\n较大值为：%d\n", z);
	return 0;
}
int comp(int a, int b)
{
	int c;
	c = a > b ? a: b;
	return c;
}