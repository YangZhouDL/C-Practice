#include <stdio.h>
int main()
{	
	while (1)
	{
		float mum,dad,self,sum,left;
		printf("������ĸ�׵������룺");
		scanf_s("%f", &mum);
		printf("�����븸�׵������룺");
		scanf_s("%f", &dad);
		printf("�������Լ��������룺");
		scanf_s("%f", &self);
		sum = mum + dad + self;
		if (sum < 10)
		{
			printf("�������������ⷿҪ��\n");
			left = sum - 0.05 * 12;
			printf("�������������Ϊ��%.2f", left);
		}
		else
		{
			printf("���������������ⷿҪ��\n");
			left = sum - 0.1 * 12;
			printf("����ͥ�����������Ϊ��%.2f", left);
		}
		printf("\n\n");
	}
	return 0;
}