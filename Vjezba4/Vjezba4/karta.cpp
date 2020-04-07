#include "karta.h"

 int Karta::dobijBroj()
{
	return broj;
}
 ZOG Karta::dobijZog()
 {
	 return zog;
 }

 void Karta::printKarta()
 {
	 switch (this->zog)
	 {
	 case spadi:
		 cout << "spadi " << "  " << broj << endl;
		 break;
	 case kupe:
		 cout << "kupe " << "  " << broj << endl;
		 break;
	 case bate:
		 cout << "bate " << "  " << broj << endl;
		 break;
	 case dinari:
		 cout << "dinari " << "  " << broj << endl;
		 break;
	 default:
		 cout << "zog:  " << zog << " broj: " << broj << endl;
		 break;
	 }

 }
 Karta::Karta(ZOG zog, int broj)
 {
	 this->zog = zog;
	 this->broj = broj;
 }