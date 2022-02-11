#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class person
{
public:
	//string name;			//ʹ��string����ֽ϶�����	
	char name[10] = { 0 };
	int age;
};

void write_binary()
{
	person p1 = { "����",18 };
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
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	person p;
	ifs.read((char*)&p, sizeof(p));		//�൱�����ڴ��п���һ��person��С������������
	cout << "������" << p.name << endl << "���䣺" << p.age << endl;
	ifs.close();
}

int binary()
{
	write_binary();
	read_binary();
	return 0;
}