#include <stdio.h>
#include <string.h>
const int m = 101, n = 11;
int main()
{
	char s1[m], s2[n], *p, *q;
	int pos=0, i=0, j, len2, locat[n];
	printf("请输入语句1：");
	gets_s(s1,m-1);
	printf("请输入待查关键词：");
	gets_s(s2, n - 1);
	len2 = strlen(s2);
	p = s1;
	q = s2;
	do
	{
		if (*p != *q)
		{
			pos++;
			p++;			
		}
		else
		{
			while ((*q != '\0') && (*p == *q))
			{
				q++;
				p++;
				pos++;
			}
			if (*q == '\0')
			{
				locat[i] = pos - len2;
				i++;
			}
		}
		q = s2;
	} while (*(p+len2-1)!='\0');
	printf("关键词出现%d次，起始位置分别是：", i);
	for (j = 0; j < i; j++)
	{
		printf("%d  ", locat[j]+1);
	}
	return 0;
}