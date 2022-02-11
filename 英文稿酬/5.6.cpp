#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp;
	char name[50], str[50];
	int count = 0;
	float money, total = 0;
	printf("请输入待处理稿件名称：");
	scanf_s("%s", name, 50);
	printf("输入稿费(单价/单词):");
	scanf_s("%f", &money);
	fopen_s(&fp, name, "r");
	if (fp == NULL)
	{
		printf("打开文件失败！\n");
		return -1;
	}
	while(!feof(fp))
	{
		fscanf_s(fp, "%s", str, 50);
		if (!strcmp(str, ",") || !strcmp(str, ".") || !strcmp(str, "!"))
		{
			continue;
		}
		++count;
	}
	total = count * money;
	printf("稿酬为：%.2f", total);
	fclose(fp);
	return 0;
}