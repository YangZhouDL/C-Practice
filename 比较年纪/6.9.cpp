#include <stdio.h>
#include <math.h>
#include <string.h>
int camp(char *p1, char *p2);
int check(char *c);
const int n = 20;
void main()
{	
	char a1[n], a2[n];
	int judge,flag;
	do
	{
		printf("请输入1号身份证号：");
		scanf_s("%s", a1, n);
		flag = check(a1);
		if (flag == 0)
		{
			printf("输入错误，请重新输入！\n");
		}
	} while (flag == 0);
	do
	{
		printf("\n请输入2号身份证号：");
		scanf_s("%s", a2, n);
		flag = check(a2);
		if (flag == 0)
		{
			printf("输入错误，请重新输入！\n");
		}
	} while (flag == 0);
	/*应添加函数判断输入数据是否正确！*/
	/*18位、除最后一位均在0-9之间、年月日范围是否正确*/
	judge = camp(a1, a2);
	switch (judge)
	{
	case 1:
		printf("\n1号年纪大！\n");
		break;
	case 0:
		printf("\n1号、2号年纪一样大！\n");
		break;
	case -1:
		printf("\n2号年纪大！\n");
		break;
	default:
		break;
	}
}
int camp(char *p1, char *p2)
{
	long int y1 = 0, y2 = 0;
	int m1=0, m2=0, d1=0, d2=0, i;
	for (i = 0; i < 4; ++i)
	{
		y1 = y1 + (p1[i + 6] - '0') * pow(10, 3 - i);
		y2 = y2 + (p2[i + 6] - '0') * pow(10, 3 - i);
	}
	for (i = 0; i < 2; ++i)
	{
		m1 = m1 + (p1[i + 10] - '0') * pow(10, 1 - i);
		m2 = m2 + (p2[i + 10] - '0') * pow(10, 1 - i);
	}
	for (i = 0; i < 2; ++i)
	{
		d1 = d1 + (p1[i + 12] - '0') * pow(10, 1 - i);
		d2 = d2 + (p2[i + 12] - '0') * pow(10, 1 - i);
	}
	if (y1 < y2)
	{
		return 1;
	}
	else if (y1 > y2)
	{
		return -1;
	}
	else if(y1 == y2)
	{
		if (m1 < m2)
		{
			return 1;
		}
		else if (m1 > m2)
		{
			return -1;
		}
		else if (m1 == m2)
		{
			if (d1 < d2)
			{
				return 1;
			}
			else if (d1 > d2)
			{
				return -1;
			}
			else if (d1 == d2)
			{
				return 0;
			}
		}
	}
}
int check(char *c)
{
	int l, f1=0, f2=0, f3=0,f, m = 0, d = 0, i, j;
	long int y = 0;
	int fy,fs=0;
	l = strlen(c);
	if (l == 18)
	{
		f1 = 1;	
	}	
	if (f1 == 1)
	{
		for (i = 0; i < 17; ++i)
		{
			j = c[i] - '0';
			if ((j >= 0) && (j <= 9))
			{
				fs++;
			}			
		}		
	}
	if (fs == 17)
	{
		f2 = 1;
	}
	if ((f1 == 1) && (f2 == 1))
	{
		for (i = 0; i < 4; ++i)
		{
			y = y + (c[i + 6] - '0') * pow(10, 3 - i);
		}
		for (i = 0; i < 2; ++i)
		{
			m = m + (c[i + 10] - '0') * pow(10, 1 - i);
		}
		for (i = 0; i < 2; ++i)
		{
			d = d + (c[i + 12] - '0') * pow(10, 1 - i);
		}
		if ((1900 <= y) && (y <= 2021))
		{
			if (((y % 4 == 0)&&(y % 100 != 0))||(y % 400 == 0))
			{
				fy = 1;
			}
			else
			{
				fy = 0;
			}
			if (1 <= m && m <= 12)
			{
				switch (m)
				{
				case 1:
					if (1 <= d && d <= 31)
					{
						f3 = 1;
					}
					break;
				case 2:
					if (fy == 1)
					{
						if (1 <= d && d <= 30)
						{
							f3 = 1;
						}
					}
					else if (fy == 0)
					{
						if (1 <= d && d <= 29)
						{
							f3 = 1;
						}
					}
					break;
				case 3:
					if (1 <= d && d <= 31)
					{
						f3 = 1;
					}
					break;
				case 4:
					if (1 <= d && d <= 30)
					{
						f3 = 1;
					}
					break;
				case 5:
					if (1 <= d && d <= 31)
					{
						f3 = 1;
					}
					break;
				case 6:
					if (1 <= d && d <= 30)
					{
						f3 = 1;
					}
					break;
				case 7:
					if (1 <= d && d <= 31)
					{
						f3 = 1;
					}
					break;
				case 8:
					if (1 <= d && d <= 31)
					{
						f3 = 1;
					}
					break;
				case 9:
					if (1 <= d && d <= 30)
					{
						f3 = 1;
					}
					break;
				case 10:
					if (1 <= d && d <= 31)
					{
						f3 = 1;
					}
					break;
				case 11:
					if (1 <= d && d <= 30)
					{
						f3 = 1;
					}
					break;
				case 12:
					if (1 <= d && d <= 31)
					{
						f3 = 1;
					}
					break;
				default:
					break;
				}
			}
		}				
	}
	if ((f1 == 1) && (f2 == 1) && (f3 == 1))
	{
		f = 1;
	}
	else
	{
		f = 0;
	}
	return f;
}