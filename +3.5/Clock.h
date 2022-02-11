#pragma once
class Clock
{
protected:
	int h, m, s;
public:
	Clock(int h, int m, int s);
	Clock(Clock &);
	virtual ~Clock();
	void SetTime(int h, int m, int s);
	void GetTime(int &h, int &m, int &s);
	void AddOneSecond();
	void DispTime();
};

