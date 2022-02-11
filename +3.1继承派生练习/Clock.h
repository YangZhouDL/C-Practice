#pragma once
class Clock
{
private:
	int h, m, s;
public:
	//���ݵ���ʱ���ʼ��ʱ��
	Clock(void);
	//����ָ��ʱ���ʼ��ʱ��
	Clock(int h, int m, int s);
	//�����Ѵ��ڵ�ʱ�ӳ�ʼ��ʱ��
	Clock(Clock &);
	~Clock(void);
	//����ʱ��
	void SetTime(int h, int m, int s);
	//��ȡʱ��
	void GetTime(int &h, int &m, int &s);
	//ʱ��+1s
	void AddOneSecond();
	void DispTime();
};

