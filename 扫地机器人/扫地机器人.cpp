#include <stdio.h>
int main()
{
	char x = 111;
	printf("开始扫地....\n");
	x = x | 2;
	printf("结束扫地，开始拖地....\n");
	x = x & ~2;
	x = x | 32;
	printf("结束拖地，开始吸尘....\n");
	x = x & ~32;
	x = x | 64;
	printf("结束吸尘....\n");
	x = x & ~64;

	int y, i;
	for (i = 7; i >= 0; --i)
	{
		y =( x >> i )& 01;
		printf("%d", y);
	}
	return 0;
}