#include <stdio.h>
const int n = 4;
struct stu 
{
	char name[20];
	char sex[10];
	float grade;
}a[n] = { {"xiaoming","male",98},
		  {"xiaozhang","male",56},
		  {"xiaohong","female",97},
		  {"xiaoyu","female",99}
		};
int ave(struct stu *p,float *average);
int main()
{
	int fail;
	float average;
	struct stu b[n];
	fail = ave(a, &average);
	printf("不及格人数为：%d\n平均分为：%.2f", fail, average);
	return 0;
}
int ave(struct stu *p, float *average)
{
	int i,count=0;
	float sum=0;
	for (i = 0; i < n; ++i, ++p)
	{
		sum += p->grade;
		if (p->grade < 60)
		{
			count++;			
		}
	}
	*average = sum / n;
	return count;
}