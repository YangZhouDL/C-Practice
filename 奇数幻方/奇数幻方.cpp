#include <stdio.h>
const int n = 5;
int main()
{
	int a[n][n] = { 0 };
	int k = 1, i = 0, j = n / 2;
	int iold, jold;
	int maxk = n * n;
	for (k = 1; k <= maxk; ++k)
	{
		a[i][j] = k;
		iold = i;
		jold = j;
		i = i - 1;
		j = j + 1;
		if (i >= 0 && j >= n)
		{
			j = 0;
		}
		else if (i < 0 && j < n)
		{
			i = n - 1;
		}
		else if (i < 0 && j >= 0)
		{
			i = iold + 1;
			j = jold;
		}
		if (a[i][j] > 0)
		{
			i = iold + 1;
			j = jold;
		}		
	}
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("%d\t", a[i][j]);			
		}
		printf("\n");
	}
	return 0;
}