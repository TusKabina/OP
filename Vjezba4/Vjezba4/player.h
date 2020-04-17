#pragma once
#include "deck.h"
#include <string>
class Player
{
	private:
		string name;
		vector<Card> hand;
		int points=0;
	public:
		void akuzaj();
		void napolitana();
		int getPoints();
		void printName();
		void printHand();
		void getHand(vector<Card> hand);
		Player(string name);
		~Player();
};