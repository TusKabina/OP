#include "deck.h"

void Deck::printDeck()
{
	for (int i = 0; i < deck.size(); i++)
	{
		
		deck[i].printCard();
	}
}
void Deck::buildDeck()
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
void Deck::shuffleDeck()
{
	srand(unsigned(time(NULL)));
	random_shuffle(deck.begin(), deck.end());
}
vector<Card> Deck::deal()
{
	vector<Card> hands;
	for (int i = 0; i < 10; i++)
	{
		hands.push_back(deck[0]);
		deck.erase(deck.begin());
	}
	return hands;
}
Deck::Deck()
{
	cout << "Constructor" << endl;
	buildDeck();
}
Deck::~Deck()
{
	cout << "Destructor" << endl;
}
