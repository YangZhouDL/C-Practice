#include <stdio.h>
int main()
{
	while (1)
	{
		float a, b, c, d, e, sum;
		printf("������ɼ���\n");
		scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
		sum = a + b + c + d + e;
		printf("�ܳɼ�Ϊ%0.2f", sum);
		printf("\n\n");
	}
	return 0;
}