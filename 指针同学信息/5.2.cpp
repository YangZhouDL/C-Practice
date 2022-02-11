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
		printf("请输入第%d位同学信息：\n",i);
		printf("姓名：\t");
		scanf_s("%s", p_stu->name, 20);		
		printf("生日：\t年 ");
		scanf_s("%d", &p_stu->birthday.year);
		printf("\t月 ");
		scanf_s("%d", &p_stu->birthday.month);
		printf("\t日 ");
		scanf_s("%d", &p_stu->birthday.day);
		printf("身高(m):");
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
		printf("\n\n个人信息如下：\n");
		printf("姓名:%s\n", p_stu->name);
		printf("生日：%d年%d月%d日\n", p_stu->birthday.year, p_stu->birthday.month, p_stu->birthday.day);
		printf("身高：%.2f(m)\n", p_stu->height);
	}
	return 0;
}