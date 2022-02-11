#include <stdio.h>
const int m = 10, n = 2;
int main()
{
	int round[m][n] = { {10,0},{6,4},{5,5},{4,3},{6,2},{8,1},{10,0},{9,0},{5,3},{8,1} };
	int i;
	for (i = 0; i <= 7; ++i)
	{
		if (round[i][0] == 10)
		{
			printf("Strike!\t\t");
			round[i][0] = round[i][0]+round[i+1][0]+round[i+1][1]+round[i+2][0]+round[i+2][1];
			printf("第%d轮得分：%d\n",i+1,round[i][0]);
		}
		else if ((round[i][0] != 10) && (round[i][0] + round[i][1] == 10))
		{
			printf("Spare!\t\t");
			round[i][0] = round[i][0]+round[i][1]+round[i+1][0]+round[i+1][1];
			printf("第%d轮得分：%d\n",i+1,round[i][0]);
		}
		else if ((round[i][0] != 10) && (round[i][0] + round[i][1] < 10))
		{
			printf("Normal!\t\t");
			round[i][0] = round[i][0] + round[i][1];
			printf("第%d轮得分：%d\n", i + 1, round[i][0]);
		}		
	}
	if ((round[8][0] == 10))
	{
		printf("Strike!\t\t");
		round[8][0] = round[8][0] + round[9][0] + round[9][1];
		printf("第9轮得分：%d\n", round[8][0]);
	}
	else if ((round[8][0] != 10) && (round[8][0] + round[8][1] == 10))
	{
		printf("Normal!\t\t");
		round[8][0] = round[8][0] + round[9][0] + round[9][1];
		printf("第9轮得分：%d\n", round[8][0]);
	}
	else if (round[8][0] + round[8][1] != 10)
	{
		printf("Normal!\t\t");
		round[8][0] = round[8][0] + round[8][1];
		printf("第9轮得分：%d\n", round[8][0]);
	}

	if ((round[9][0] == 10))
	{
		printf("Strike!\t\t");
		printf("第10轮得分：%d\n", round[9][0]);
	}
	else if ((round[9][0] != 10) && (round[9][0] + round[9][1] == 10))
	{
		printf("Normal!\t\t");
		round[9][0] = round[9][0] + round[9][1];
		printf("第10轮得分：%d\n", round[9][0]);
	}
	else if (round[9][0] + round[9][1] != 10)
	{
		printf("Normal!\t\t");
		round[9][0] = round[9][0] + round[9][1];
		printf("第10轮得分：%d\n", round[9][0]);
	}
	return 0;
}