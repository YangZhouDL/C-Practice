#include <stdio.h>
#include <string.h>
const int m = 100,n=50;
int main()
{
	char s1[m],*p;
	int num,i,j;
	printf("请输入字符串：");
	gets_s(s1, m - 1);
	num = strlen(s1);
	p = s1;
	for (i=0; i <= num; ++i)
	{
		for (j = i + 1; j <= num; ++j)
		{
			if (*(p + j) == *(p + i))
			{
				*(p + j) = ' ';
			}
		}
	}
	if (num > n)
	{
		printf("字符数超出限制！\n");
	}
	for (i = 0; i <= num; ++i)
	{
		if (*(p + i) != ' ')
		{
			printf("%c", *(p + i));
		}
	}
	return 0;
}