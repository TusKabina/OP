#pragma once
#include "player.h"
class Treseta
{
	private:
		int PlayerNumber;
		Deck deck;
		vector<Player> players;
	public:
		void printPoints();
		void printPlayers();
		Treseta(int PlayerNumber, vector<string> playerNames);
		~Treseta();
};