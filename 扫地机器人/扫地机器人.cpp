#include <stdio.h>
int main()
{
	char x = 111;
	printf("��ʼɨ��....\n");
	x = x | 2;
	printf("����ɨ�أ���ʼ�ϵ�....\n");
	x = x & ~2;
	x = x | 32;
	printf("�����ϵأ���ʼ����....\n");
	x = x & ~32;
	x = x | 64;
	printf("��������....\n");
	x = x & ~64;

	int y, i;
	for (i = 7; i >= 0; --i)
	{
		y =( x >> i )& 01;
		printf("%d", y);
	}
	return 0;
}