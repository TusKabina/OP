#include "treseta.h"
void Treseta::printBodove()
{

	for (int i = 0; i < brojIgraca; i++)
	{
		igraci[i].printIme();
		cout << igraci[i].getBodovi() << endl;
	}
}
void Treseta::printIgrace()
{
	for (int i = 0; i < brojIgraca; i++)
	{
		igraci[i].printIme();
	}
}
Treseta::Treseta(int brojIgraca, vector<string> imenaIgraca)
{
	this->brojIgraca = brojIgraca;
	deck.shuffleDeck();
	for (int i = 0; i < brojIgraca; i++)
	{
		igraci.push_back(imenaIgraca[i]);
	}
	
	for (int igrac = 0; igrac < brojIgraca; igrac++)
	{

		vector<Karta> ruke = deck.deal();
		igraci[igrac].dobijRuku(ruke);
		igraci[igrac].akuzaj();
		igraci[igrac].napolitana();
		igraci[igrac].printIme();
		cout << endl;
		igraci[igrac].printRuka();
		cout << endl;
		

	}
	printBodove();

}