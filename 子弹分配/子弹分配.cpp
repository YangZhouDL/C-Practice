#include <stdio.h>
const int n = 10;
int main()
{
	int i, a[n] = { 10,2,8,22,16,4,10,6,14,20 },aold[n],k=0;
	printf("%d\t",k);
	for (i = 0; i < n; ++i)
	{
		printf("%d\t",a[i]);
	}
	printf("各战士手中原始的子弹数\n");
	do
	{
		for (i = 0; i < n; ++i)
		{
			if (a[i] % 2 != 0)
			{
				a[i] = a[i] + 1;
			}
		}
		for (i = 0; i < n; ++i)
		{
			aold[i] = a[i];
		}
		a[0] = (aold[0] + aold[n - 1]) / 2;
		for (i = 1; i < n; ++i)
		{
			a[i] = (aold[i-1] + aold[i]) / 2;
		}		
		++k;
		printf("%d\t", k);
		for (i = 0; i < n; ++i)
		{
			printf("%d\t",a[i]);
		}
		printf("第%d轮各战士手中的子弹数\n",k);
	} while(a[0]!=a[1]||a[1]!=a[2]||a[2]!= a[3]||a[3]!= a[4]||a[4]!=a[5]||a[5]!=a[6]||a[6]!= a[7]||a[7] != a[8]||a[8] != a[9]||a[9] != a[0]);
	return 0;
}