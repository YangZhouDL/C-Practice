#include <stdio.h>
#include <stdlib.h>
void getmemory(int n, int **p);
void main()
{
	int n, *add = NULL;
	scanf_s("%d", &n);
	getmemory(n, &add);
	*add = 1;
	printf("%p,%d", add, *add);
}
void getmemory(int n, int **p)
{
	*p = (int*)malloc(n * sizeof(n));
}