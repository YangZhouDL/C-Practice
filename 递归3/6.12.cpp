#include <stdio.h>
void hanoi(int n, char x, char y, char z);
int num = 0;
int main()
{
	int n;
	printf("�����뺺ŵ���Ĳ�����");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("���ƶ��� %d ��\n", num);
	return 0;
}
// n��ʾҪ�����ٸ�"Բ��"����ʼ����A�ƶ���Ŀ������B
// x��ʾ��ʼ����,y��ʾĿ������,z��ʾ��������
void hanoi(int n, char x, char y, char z)
{
	if (n == 0)
	{
	}
	else
	{
		hanoi(n - 1, x, z, y);// �ݹ鴦��,һ��ʼ��ʱ��,�Ƚ�n-1����������������z��
		printf("��%d������%d��Բ�̴�%c����%c\n", num + 1, n, x, y); // Ȼ���ٽ�����µĴ�����ֱ������Ŀ������y
		num++;
		hanoi(n - 1, z, y, x); // Ȼ���ظ����ϲ���,�ݹ鴦����ڹ�����z�ϵ�n-1������,
							   // ��ʱx�Ѿ�Ϊ�գ�����x�����ɹ�������
	}	
}