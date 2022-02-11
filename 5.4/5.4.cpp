#include <stdio.h>
#include <stdlib.h>
#define n 6
int main()
{
	char judge;
	do
	{
		int i, j = 0, x, y, z, sum = 0, k, cup, money;
		int s1[n] = { 0 }, s2[n] = { 0 }, s3[n] = { 0 };
		z = rand() % 21 + 10;
		printf("共游戏%d轮\n", z);
		printf("已喝酒人员为：\n");
		for (i = 0; i < z; ++i)
		{
			x = rand() % 4 + 2;
			j = (j + x) % n;
			if (s2[j] == 0)
			{
				s2[j] = 1;
			}
			else if (s2[j] == 1)
			{
				s3[j]++;
			}
			y = rand() % 4 + 2;
			s1[j] = s1[j] + y;
		}
		for (j = 0; j < n; j++)
		{
			if (s2[j] == 1)
			{
				printf("第%d人已喝酒，喝%d次，共喝%d杯\n", j + 1, s3[j] + 1, s1[j]);
			}
			sum = sum + s1[j];
		}
		k = sum % 3;
		if (k == 0)
		{
			cup = sum / 3;
		}
		else
		{
			cup = sum / 3 + 1;
		}
		money = cup * 5;
		printf("共喝%d杯，折合需%d瓶，共花费%d元\n\n", sum, cup, money);
		printf("是否继续游戏(y/n):");	
		scanf_s("%c", &judge, 1);
		getchar();
		printf("\n\n");
	} while (judge=='y');
	return 0;
}