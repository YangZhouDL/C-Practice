#pragma once
class Clock
{
private:
	int h, m, s;
public:
	//根据电脑时间初始化时钟
	Clock(void);
	//根据指定时间初始化时钟
	Clock(int h, int m, int s);
	//根据已存在的时钟初始化时钟
	Clock(Clock &);
	~Clock(void);
	//设置时间
	void SetTime(int h, int m, int s);
	//获取时间
	void GetTime(int &h, int &m, int &s);
	//时间+1s
	void AddOneSecond();
	void DispTime();
};

