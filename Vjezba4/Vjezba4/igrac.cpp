#include "igrac.h"

void Igrac::napolitana()
{
	int counterSpadi = 0, counterDinari = 0, counterKupe = 0, counterBati = 0;

	for (int i = 0; i < ruka.size(); i++)
	{
		int tempBroj = ruka[i].dobijBroj();
		ZOG tempZog = ruka[i].dobijZog();
		switch (tempZog)
		{
		case spadi:
			if (tempBroj == 1 || tempBroj == 2 || tempBroj == 3)
				counterSpadi++;
			break;
		case bate:
			if (tempBroj == 1 || tempBroj == 2 || tempBroj == 3)
				counterBati++;
			break;
		case kupe:
			if (tempBroj == 1 || tempBroj == 2 || tempBroj == 3)
				counterKupe++;
			break;
		case dinari:
			if (tempBroj == 1 || tempBroj == 2 || tempBroj == 3)
				counterDinari++;
			break;
		default:
			break;
		}
	}
	if (counterSpadi == 3)
	{
		bodovi = bodovi + 3;
	}
	if (counterDinari == 3)
	{
		bodovi = bodovi + 3;
	}
	if (counterKupe == 3)
	{
		bodovi = bodovi + 3;
	}
	if (counterBati == 3)
	{
		bodovi = bodovi + 3;
	}
}
void Igrac::akuzaj()
{
	int counterAs = 0, counterTwo = 0, counterThree = 0;
	for (int i = 0; i < ruka.size(); i++)
	{
		int tempBroj = ruka[i].dobijBroj();
		switch (tempBroj)
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
		bodovi = bodovi + 3;
	}
	if (counterTwo == 3)
	{
		bodovi = bodovi + 3;
	}
	if (counterThree == 3)
	{
		bodovi = bodovi + 3;
	}
	if (counterAs == 4)
	{
		bodovi = bodovi + 4;
	}
	if (counterTwo == 4)
	{
		bodovi = bodovi + 4;
	}
	if (counterThree == 4)
	{
		bodovi = bodovi + 4;
	}
}

int Igrac::getBodovi()
{
	return bodovi;
}

void Igrac::printIme()
{
	cout << " " << ime << endl;
}

void Igrac::printRuka()
{
	for (int i = 0; i < ruka.size(); i++)
	{
		ruka[i].printKarta();
	}
}

void Igrac::dobijRuku(vector<Karta> ruka)
{

	this->ruka = ruka;
}
Igrac::Igrac(string ime)
{
	this->ime.append(ime);
}