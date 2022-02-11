#include<iostream>
using namespace std;
void exp(char *a, char *b);
int main()
{
	const int n = 50;
	char a[n], b[n];
	cout << "ÇëÊäÈë×Ö·û´®a£º";
	cin >> a;	
	exp(a, b);
	cout << endl << "ÏÔÊ½×Ö·û´®a£º" << b;
	return 0;
}
void exp(char *a, char *b)
{
	int i, j;
	for (i = 0, j = 0; a[i] != '\0'; i++)
	{
		switch (a[i])
		{
		case '\n':
			b[j] = '\\'; b[j + 1] = 'n';
			j+=2;
			break;
		case '\t':
			b[j] = '\\'; b[j + 1] = 't';
			j+=2;
			break;
		default:
			b[j] = a[i];
			j++;
			break;
		}
	}
	b[j] = '\0';
}