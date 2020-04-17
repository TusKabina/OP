#include "player.h"

void Player::napolitana()
{
	int counterSpadi = 0, counterDinari = 0, counterKupe = 0, counterBati = 0;
	for (int i = 0; i < hand.size(); i++)
	{
		int tempNumber = hand[i].getCardNumber();
		ZOG tempZog = hand[i].getZog();
		switch (tempZog)
		{
		case ZOG::spadi:
			if (tempNumber == 1 || tempNumber == 2 || tempNumber == 3)
				counterSpadi++;
			break;
		case ZOG::bate:
			if (tempNumber == 1 || tempNumber == 2 || tempNumber == 3)
				counterBati++;
			break;
		case ZOG::kupe:
			if (tempNumber == 1 || tempNumber == 2 || tempNumber == 3)
				counterKupe++;
			break;
		case ZOG::dinari:
			if (tempNumber == 1 || tempNumber == 2 || tempNumber == 3)
				counterDinari++;
			break;
		default:
			break;
		}
	}
	if (counterSpadi == 3)
	{
		points = points + 3;
	}
	if (counterDinari == 3)
	{
		points = points + 3;
	}
	if (counterKupe == 3)
	{
		points = points + 3;
	}
	if (counterBati == 3)
	{
		points = points + 3;
	}
}
void Player::akuzaj()
{
	int counterAs = 0, counterTwo = 0, counterThree = 0;
	for (int i = 0; i < hand.size(); i++)
	{
		int tempNumber = hand[i].getCardNumber();
		switch (tempNumber)
		{
		case 1:
			counterAs++;
			break;
		case 2:
			counterTwo++;
			break;
		case 3:
			counterThree++;
			break;
		default:
			break;
		}
	}
	if (counterAs == 3)
	{
		points = points + 3;
	}
	if (counterTwo == 3)
	{
		points = points + 3;
	}
	if (counterThree == 3)
	{
		points = points + 3;
	}
	if (counterAs == 4)
	{
		points = points + 4;
	}
	if (counterTwo == 4)
	{
		points = points + 4;
	}
	if (counterThree == 4)
	{
		points = points + 4;
	}
}
int Player::getPoints()
{
	return points;
}
void Player::printName()
{
	cout << " " << name << endl;
}
void Player::printHand()
{
	for (int i = 0; i < hand.size(); i++)
	{
		hand[i].printCard();
	}
}
void Player::getHand(vector<Card> hand)
{

	this->hand = hand;
}
Player::Player(string name)
{
	cout << "Constructor" << endl;
	this->name.append(name);
}
Player::~Player()
{
	cout << "Destructor" << endl;
}