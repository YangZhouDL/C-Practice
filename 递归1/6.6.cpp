#include <stdio.h>
long gcd(int a, int b)
{
	int temp;
	while (a%b!=0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return b;
	//if (a % b == 0)
	//{
	//	return b;
	//}
	//else
	//{
	//	return gcd(b, a % b);
	//}
}
int main()
{
	int c = gcd(216, 27);
	printf("最大公因数为：%d", c);
	return 0;
}