#include "ShoppingCard.h"
#include<string>
using namespace std;
ShoppingCard::ShoppingCard(string id, float money)
{
	ID = id;
	remainmoney = money;
}
void ShoppingCard::getID(string &buf)
{
	buf = ID;
	/*strcpy_s(buf,20,ID);*/
}
float ShoppingCard::getRemainMoney()
{
	return remainmoney;
}
bool ShoppingCard::consume(float money)
{
	if (remainmoney >= money)
	{
		remainmoney -= money;
		return true;
	}
	else
	{
		return false;
	}
}