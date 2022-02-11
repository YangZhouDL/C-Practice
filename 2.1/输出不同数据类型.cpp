#include <stdio.h>
#include <stdlib.h>
int main()
{
	while (1)
	{
		int a;
		printf("请输入一个正整数：\n");
		scanf_s("%d", &a);
		printf("十六进制数为0x%x\n", a);
		printf("八进制数为%04o\n", a);
		char str[30];
		_itoa_s(a, str, 2);
		printf("二进制数为%s\n", str);
	}
	return 0;
}