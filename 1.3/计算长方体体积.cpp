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
	printf("�����볤�����ߣ�\n");
	flag = scanf_s("%d%d%d", &x, &y, &z);
	if (flag == 3 && x > 0 && y > 0 && z > 0)
	{
		v = volume(x, y, z);
		printf("����������Ϊ%d", v);
	}
	else
		printf("�������\n");
	return 0;
}