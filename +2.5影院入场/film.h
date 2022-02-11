#pragma once
class film
{
private:
	int Num;
	static int TotalNum;
public:
	film();
	~film();
	void AddOne();
	void DisplayOne();
	static void DisplayAll();
};

