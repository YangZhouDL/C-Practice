#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())			//判断文件是否成功打开
	{
		cout << "文件打开失败！" << endl;
		return;
	}

	//Method 01
	/*char buf[1024] = {0};
	while (ifs>>buf)
	{
		cout << buf << endl;
	}*/

	//Method 02
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//Method03
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//Method04
	char c;
	while ((c=ifs.get())!=EOF)		//EOF：end of file
	{
		cout << c ;
	}

	ifs.close();
}

int file_in()
{
	test01();
	return 0;
}