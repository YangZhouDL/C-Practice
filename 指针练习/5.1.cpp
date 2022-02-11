#include <stdio.h>
#define strlen 30
int main()
{
	char s1[2 * strlen + 1], s2[strlen + 1];
	char * p1 = s1, * p2 = s2;
	printf("请输入单词1：");
	scanf_s("%s", s1, strlen);
	printf("请输入单词2：");
	scanf_s("%s", s2, strlen);
	while (*p1)
	{
		p1++;
	}
	while (*p2)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	printf("%s\n", s1);
	return 0;
}
