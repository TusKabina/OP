#pragma once
#include <iostream>
using namespace std;
enum class ZOG
{
	spadi = 1,
	kupe,
	bate,
	dinari
};
class Card
{
	private:
		ZOG zog;
		int cardNumber;
	public:
		int getCardNumber();
		ZOG getZog();
		void printCard();
		Card(ZOG zog, int cardNumber);
		~Card();
};