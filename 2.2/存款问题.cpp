#include <stdio.h>
int main()
{
	while (1)
	{
		float a,sum;
		int b, c;
		printf("请输入年利率(百分制)：");
		scanf_s("%f", &a);
		printf("请输入存款金额：");
		scanf_s("%d",&b);
		printf("请输入存款年份：");
		scanf_s("%d",&c);
		sum = 0.01 * a * b * c + b;
		printf("%d年后本息合计%.3f元", c, sum);
		printf("\n\n");
	}
	return 0;
}