#include <stdio.h>
#include <string.h>
const int n = 5;
void sort(char cs[][21]);
int main()
{
	char cs[n][21];
	int i;
	printf("Input %d country's name:\n",n);
	for (i = 0; i < n; ++i)
	{
		gets_s(cs[i], 20);	
		printf("\n");
	}	
	sort(cs);
	printf("\n\nResult after sorting:\n");
	for (i = 0; i < n; ++i)
	{
		puts(cs[i]);
		printf("\n");
	}
	return 0;
}
void sort(char cs[][21])    //相当于将main函数中的二维数组cs的首地址传递至sort函数的二维数组cs
							//实际仍是传地址
{
	int i, j, p;
	char temp[21];
	for (i = 0; i < n; ++i)
	{		
		for (j = i + 1; j < n; ++j)
		{
			p = i;
			if (strcmp(cs[j], cs[p]) < 0)
			{
				p = j;
			}
			if (p != i)
			{
				strcpy_s(temp, cs[i]);
				strcpy_s(cs[i], cs[p]);
				strcpy_s(cs[p], temp);
			}
		}		
	}
}