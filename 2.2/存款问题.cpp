#include <stdio.h>
int main()
{
	while (1)
	{
		float a,sum;
		int b, c;
		printf("������������(�ٷ���)��");
		scanf_s("%f", &a);
		printf("���������");
		scanf_s("%d",&b);
		printf("����������ݣ�");
		scanf_s("%d",&c);
		sum = 0.01 * a * b * c + b;
		printf("%d���Ϣ�ϼ�%.3fԪ", c, sum);
		printf("\n\n");
	}
	return 0;
}