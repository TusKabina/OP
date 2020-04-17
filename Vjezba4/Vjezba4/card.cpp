#include "card.h"
 int Card::getCardNumber()
{
	return cardNumber;
}
 ZOG Card::getZog()
 {
	 return zog;
 }
 void Card::printCard()
 {
	 switch (this->zog)
	 {
	 case ZOG::spadi:
		 cout << "spadi " << "  " << cardNumber << endl;
		 break;
	 case ZOG::kupe:
		 cout << "kupe " << "  " << cardNumber << endl;
		 break;
	 case ZOG::bate:
		 cout << "bate " << "  " << cardNumber << endl;
		 break;
	 case ZOG::dinari:
		 cout << "dinari " << "  " << cardNumber << endl;
		 break;
	 default:
		 break;
	 }

 }
 Card::Card(ZOG zog, int cardNumber)
 {
	 cout << "Constructor" << endl;
	 this->zog = zog;
	 this->cardNumber = cardNumber;
 }
 Card::~Card()
 {
	 cout << "Destructor" << endl;
 }