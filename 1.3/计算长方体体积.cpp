#include <stdio.h>
int volume(int a, int b, int c)
{
	int p;
	p = a * b * c;
	return(p);
}
int main1()
{
	int x, y, z, v, flag;
	printf("请输入长、宽、高：\n");
	flag = scanf_s("%d%d%d", &x, &y, &z);
	if (flag == 3 && x > 0 && y > 0 && z > 0)
	{
		v = volume(x, y, z);
		printf("长方体的体积为%d", v);
	}
	else
		printf("输入错误！\n");
	return 0;
}