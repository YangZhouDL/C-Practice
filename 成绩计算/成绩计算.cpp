#include <stdio.h>
int main()
{
	while (1)
	{
		float a, b, c, d, e, sum;
		printf("请输入成绩：\n");
		scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
		sum = a + b + c + d + e;
		printf("总成绩为%0.2f", sum);
		printf("\n\n");
	}
	return 0;
}