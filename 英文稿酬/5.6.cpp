#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp;
	char name[50], str[50];
	int count = 0;
	float money, total = 0;
	printf("����������������ƣ�");
	scanf_s("%s", name, 50);
	printf("������(����/����):");
	scanf_s("%f", &money);
	fopen_s(&fp, name, "r");
	if (fp == NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
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
	printf("���Ϊ��%.2f", total);
	fclose(fp);
	return 0;
}