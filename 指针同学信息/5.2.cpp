#include <stdio.h>
struct data
{
	int year;
	int month;
	int day;
};
struct student
{
	char name[21];
	struct data birthday;
	double height;
};
#define n 2
int main()
{
	struct student stu[n + 1];
	struct student *p_stu = 0;
	int i, j, changed=0;
	p_stu = stu + 1;
	for (i = 1; p_stu <= stu + n; p_stu++, i++)
	{
		printf("�������%dλͬѧ��Ϣ��\n",i);
		printf("������\t");
		scanf_s("%s", p_stu->name, 20);		
		printf("���գ�\t�� ");
		scanf_s("%d", &p_stu->birthday.year);
		printf("\t�� ");
		scanf_s("%d", &p_stu->birthday.month);
		printf("\t�� ");
		scanf_s("%d", &p_stu->birthday.day);
		printf("���(m):");
		scanf_s("%lf", &p_stu->height);
		printf("\n\n");
	}
	for (i = 1; i < n; ++i)
	{
		changed = 0;
		for (j = 1; j <= n - i; ++j)
		{
			if (stu[j].height > stu[j + 1].height)
			{
				stu[0] = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = stu[0];
				changed = 1;
			}
		}
		if (changed == 0)
		{
			break;
		}
	}
	p_stu = stu + 1;
	for (; p_stu <= stu + n; p_stu++)
	{
		printf("\n\n������Ϣ���£�\n");
		printf("����:%s\n", p_stu->name);
		printf("���գ�%d��%d��%d��\n", p_stu->birthday.year, p_stu->birthday.month, p_stu->birthday.day);
		printf("��ߣ�%.2f(m)\n", p_stu->height);
	}
	return 0;
}