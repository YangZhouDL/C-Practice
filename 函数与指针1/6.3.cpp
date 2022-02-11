#include <stdio.h>
#include <string.h>
const int n = 80;
char *match(char ch,char *sp)
{
	int count = 0;
	while (ch!=sp[count]&&sp[count]!='\0')
	{
		count++;
	}
	if (sp[count])
	{
		return(&sp[count]);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char s[n],ch,*p;
	int pos;
	printf("ÇëÊäÈë×Ö·û´®£º");
	gets_s(s);
	/*getchar();*/
	printf("ÇëÊäÈë×Ö·û£º");
	ch=getchar();
	p = match(ch, s);
	if (p)
	{
		pos = strlen(s) - strlen(p) + 1;
		printf("Î»ÖÃÎª£º%d\nÓàÏÂ×Ö·û´®Îª£º%s\n", pos, p);
	}
	else
	{
		printf("Î´ÕÒµ½£¡\n");
	}
	return 0;
}