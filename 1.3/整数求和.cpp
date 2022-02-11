#include <stdio.h>
int main()
{
	int a, b, c,d,flag;
	printf("请输入3个整数：\n");
	flag = scanf_s("%d%d%d", &a, &b, &c);
	if (flag == 3)
	{
		d = a + b + c;
		printf("整数和为%d", d);
	}
	else
		printf("输入错误！");
}