#include <stdio.h>
int main()
{
	int a, b, c,d,flag;
	printf("������3��������\n");
	flag = scanf_s("%d%d%d", &a, &b, &c);
	if (flag == 3)
	{
		d = a + b + c;
		printf("������Ϊ%d", d);
	}
	else
		printf("�������");
}