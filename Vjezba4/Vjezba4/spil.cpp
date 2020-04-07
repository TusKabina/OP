#include "spil.h"

void Spil::printDeck()
{
	for (int i = 0; i < deck.size(); i++)
	{
		
		deck[i].printKarta();
	}
}

void Spil::buildDeck()
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			switch (j)
			{
			case 8:
				deck.push_back({ (ZOG)i,j + 3 });
				break;
			case 9:
				deck.push_back({ (ZOG)i,j + 3 });
				break;
			case 10:
				deck.push_back({ (ZOG)i,j + 3 });
				break;
			default:
				deck.push_back({ (ZOG)i,j });
				break;
			}

		}
	}
}
void Spil::shuffleDeck()
{
	srand(unsigned(time(NULL)));
	random_shuffle(deck.begin(), deck.end());
}
vector<Karta> Spil::deal()
{

	vector<Karta> ruke;
	for (int i = 0; i < 10; i++)
	{
		ruke.push_back({ deck[0] });
		deck.erase(deck.begin());
	}
	return ruke;
}

Spil::Spil()
{
	buildDeck();
}
