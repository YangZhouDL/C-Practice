#include <stdio.h>
#include <stdlib.h>
int main()
{
	while (1)
	{
		int a;
		printf("������һ����������\n");
		scanf_s("%d", &a);
		printf("ʮ��������Ϊ0x%x\n", a);
		printf("�˽�����Ϊ%04o\n", a);
		char str[30];
		_itoa_s(a, str, 2);
		printf("��������Ϊ%s\n", str);
	}
	return 0;
}