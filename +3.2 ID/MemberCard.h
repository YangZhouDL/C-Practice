#pragma once
#include"ShoppingCard.h"
#include<string>
using namespace std;
class MemberCard:
	public ShoppingCard
{
private:
	string Identity;
	float discount;
public:
	MemberCard(string identity, string id, float money);
	void getIdentity(string &buf);
	bool Recharge(float money);
	bool consume(float money);
	bool SetDiscount(float discount);
	float GetDiscount();
};

