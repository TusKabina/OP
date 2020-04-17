#pragma once
#include "card.h"
#include <vector>
#include <algorithm> 
#include <ctime>
class Deck
{
	private:
		vector<Card>deck;
	public:
		void printDeck();
		void buildDeck();
		void shuffleDeck();
		vector<Card> deal();
		Deck();
		~Deck();
};