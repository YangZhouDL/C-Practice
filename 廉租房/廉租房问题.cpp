#include <stdio.h>
int main()
{	
	while (1)
	{
		float mum,dad,self,sum,left;
		printf("请输入母亲的年收入：");
		scanf_s("%f", &mum);
		printf("请输入父亲的年收入：");
		scanf_s("%f", &dad);
		printf("请输入自己的年收入：");
		scanf_s("%f", &self);
		sum = mum + dad + self;
		if (sum < 10)
		{
			printf("您满足租赁廉租房要求\n");
			left = sum - 0.05 * 12;
			printf("您的年收入余额为：%.2f", left);
		}
		else
		{
			printf("您不满足租赁廉租房要求\n");
			left = sum - 0.1 * 12;
			printf("您家庭的年收入余额为：%.2f", left);
		}
		printf("\n\n");
	}
	return 0;
}