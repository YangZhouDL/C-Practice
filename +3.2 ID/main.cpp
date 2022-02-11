#include"MemberCard.h"
#include"ShoppingCard.h"
#include<iostream>
using namespace std;
int main()
{
	string str;
	MemberCard aCard("320831199908044219", "00001", 500);
	cout << "MemberCard Info:" << endl;
	aCard.getID(str);
	cout << "Card ID:" << str << endl;
	aCard.getIdentity(str);
	cout << "Identity:" << str << endl;
	aCard.SetDiscount(0.8);
	cout << "Discount:" << aCard.GetDiscount() * 100 << "%" << endl;
	aCard.consume(100);
	aCard.Recharge(500);
	cout << "Remain Money:" << aCard.getRemainMoney() << endl;
	return 0;
}