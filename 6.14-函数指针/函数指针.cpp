#include <stdio.h>
int comp(int a, int b);
int main()
{
	int (*p)(int c, int d);
	int x, y,z;
	printf("��������������");
	scanf_s("%d%d", &x, &y);
	p = comp;
	z = (*p)(x, y);
	printf("\n�ϴ�ֵΪ��%d\n", z);
	return 0;
}
int comp(int a, int b)
{
	int c;
	c = a > b ? a: b;
	return c;
}