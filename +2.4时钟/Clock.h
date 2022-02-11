#pragma once
class Clock
{private:
	int h, m, s;
public:
	void SetTime(int x, int y, int z);
	void ShowTime();
	void AddSecond();
	Clock(int x, int y, int z);
	~Clock(){}
};

