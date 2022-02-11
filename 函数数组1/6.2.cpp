#include <stdio.h>
const int n = 5;
float aver(float b[])
{
	float sum=0, ave;
	int i;
	for (i = 0; i < n; ++i)
	{
		sum += b[i];
	}
	ave = sum / n;
	return ave;
}
int main()
{
	float a[n],ave;
	int i;
	printf("请输入各同学成绩：");
	for (i = 0; i < n; ++i)
	{
		scanf_s("%f", &a[i]);
	}
	ave = aver(a);
	printf("平均分为：%.2f", ave);
	return 0;
}