#pragma once
#include "karta.h"
#include <vector>
#include <algorithm> 
#include <ctime>
class Spil
{
private:
	vector<Karta>deck;
public:
	void printDeck();
	void buildDeck();
	void shuffleDeck();
	vector<Karta> deal();
	Spil();
};