#pragma once
#include "player.h"

class HumanPlayer : public Player
{
	public:
		HumanPlayer() : Player() {}
		HumanPlayer(string name) {this->name.assign(name);}
		int getHand() { return hand; }
		void setHand(int hand) { this->hand = hand; }
		int getPoints() { return this->points; }
		void setPoints() { this->points++; }
		void setParNepar(ParNepar parOrNepar) { this->parOrNepar = parOrNepar; }
		ParNepar getParNepar() { return parOrNepar; }
		void setBotHand() {};
};