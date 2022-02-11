#pragma once
#include<string>
using namespace std;
class ShoppingCard
{
protected:
	string ID;
	float remainmoney;
public:
	ShoppingCard(string id, float money);
	void getID(string &buf);
	float getRemainMoney();
	bool consume(float money);
};

