#include "treseta.h"
void Treseta::printPoints()
{
	for (int i = 0; i < PlayerNumber; i++)
	{
		players[i].printName();
		cout << players[i].getPoints() << endl;
	}
}
void Treseta::printPlayers()
{
	for (int i = 0; i < PlayerNumber; i++)
	{
		players[i].printName();
	}
}
Treseta::Treseta(int PlayerNumber, vector<string> playerNames)
{
	cout << "Constructor" << endl;
	this->PlayerNumber = PlayerNumber;
	deck.shuffleDeck();
	for (int i = 0; i < PlayerNumber; i++)
	{
		players.push_back(playerNames[i]);
	}
	for (int player = 0; player < PlayerNumber; player++)
	{
		vector<Card> hands = deck.deal();
		players[player].getHand(hands);
		players[player].akuzaj();
		players[player].napolitana();
		players[player].printName();
		cout << endl;
		players[player].printHand();
		cout << endl;
	}
	printPoints();
}
Treseta::~Treseta()
{
	cout << "Destructor" << endl;
}