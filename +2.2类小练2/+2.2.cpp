#include<iostream>
using namespace std;
class String {
private:
	char *buf;
	int size;
public:
	String(int n);
	String(char *s);
	void copy(char *str);
	char *get();
	~String();
};
String::String(int n)
{
	size = n;
	buf = new char [size];
}
String::String(char *s)
{
	size = strlen(s)+1;
	buf = new char[size];
}
String::~String()
{
	if (buf != NULL)
	{
		delete []buf;
	}
}
void String::copy(char *str)
{
	strcpy_s(buf,size, str);	
}
char *String::get()
{
	return buf;
}
int main()
{	
	char s[] = "I love China!";
	int len = strlen(s)+1;
	String a1(len);
	String a2(s);
	a1.copy(s);
	a2.copy(s);
	char *p1 = a1.get();
	char *p2 = a2.get();
	if (p1 == NULL)
	{
		cout << "str1 is null!" << endl;
	}
	else
	{
		cout << "str1 is:" << p1 << endl;
	}
	if (p2 == NULL)
	{
		cout << "str2 is null!" << endl;
	}
	else
	{
		cout << "str2 is:" << p2 << endl;
	}
	return 0;
}