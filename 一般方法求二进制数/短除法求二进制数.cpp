#include <stdio.h>
int main()
{
	int a, b, k, i;
	int str[30];
	while (1)
	{
		printf("������һ��������:");
		scanf_s("%d", &a);
		k = 0;
		while (a!=0)
		{
			b = a / 2;
			k++;
			str[k] = a - 2 * b;
			a = a / 2;
		}
		printf("ת���Ķ�������Ϊ:");
		for ( i = k; i > 0; --i)
		{
			printf("%d", str[i]);
		}
		printf("\n\n");
	}
	return 0;
}