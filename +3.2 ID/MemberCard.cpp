#include "MemberCard.h"
#include<string.h>
MemberCard::MemberCard(string identity, string id, float money):ShoppingCard(id,money)
{
	Identity = identity;
	discount = 1;
}
void MemberCard::getIdentity(string &buf)
{
	buf = Identity;
	/*strcpy_s(buf,20, Identity);*/
}
bool MemberCard::Recharge(float money)
{
	if (money > 0)
	{
		remainmoney += money;
		return true;
	}
	else
	{
		return false;
	}
}
bool MemberCard::consume(float money)
{
	money *= discount;
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
bool MemberCard::SetDiscount(float discount)
{
	if (discount > 0 && discount < 1)
	{
		this->discount = discount;
		return true;
	}
	else
	{
		return false;
	}
}
float MemberCard::GetDiscount()
{
	return discount;
}
