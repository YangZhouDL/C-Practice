#pragma once
class Clock
{
private:
	int h, m, s, z;
public:
	Clock();
	Clock(int z, int h, int m, int s);
	Clock(Clock &c);
	virtual ~Clock();
	void SetTime(int h, int m, int s);
	void GetTime(int& h, int& m, int& s);
	void SetZone(int z);
	int GetZone();
	void AddOneSecond();
	void DispTime();
};

