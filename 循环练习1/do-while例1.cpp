#include <stdio.h>
int main()
{
	while (1)
	{
		char a;
		int b = 0, c = 0;
		printf("Please write a sentence:");
		do
		{
			scanf_s("%c", &a, 1);
			if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
			{
				++b;
			}
			else if (a >= '0' && a <= '9')
			{
				++c;
			}
		} while (a != '.');
		printf("\n");
		printf("The number of characters are %d.\n", b);
		printf("The number of digitals are %d.\n", c);
		printf("\n\n\n");
	}
	return 0;
}