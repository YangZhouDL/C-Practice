#include <stdio.h>
long jc(int p);
int main()
{
	int i,n,r;
	printf("������һ����������");
	scanf_s("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		r = jc(i);
		printf("%d�Ľ׳�Ϊ%d\n", i, r);
	}	
	return 0;
}
long jc(int p)
{
	long static f = 1;
	f = f * p;
	return f;
}