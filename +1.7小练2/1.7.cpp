#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string n1 = "1.txt", n2 = "2.txt";
	char buf[50] = "Peach!",s[100];
	ifstream file1(n1);
	fstream file2;
	file2.open(n2);
	int i = 0;
	while (!file1.eof())
	{
		file2.put(buf[i]);
		buf[i] = file1.get();
		i++;
	}
	cout << buf << " " << i << endl;
	file2.getline(s,100);
	cout << s << endl;
	file1.close();
	file2.close();
	return 0;
}