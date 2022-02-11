#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class person
{
public:
	//string name;			//使用string会出现较多乱码	
	char name[10] = { 0 };
	int age;
};

void write_binary()
{
	person p1 = { "张三",18 };
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);
	ofs.write((const char*)&p1, sizeof(p1));
	ofs.close();
}

void read_binary()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
	}
	person p;
	ifs.read((char*)&p, sizeof(p));		//相当于在内存中开辟一块person大小的区域存放数据
	cout << "姓名：" << p.name << endl << "年龄：" << p.age << endl;
	ifs.close();
}

int binary()
{
	write_binary();
	read_binary();
	return 0;
}