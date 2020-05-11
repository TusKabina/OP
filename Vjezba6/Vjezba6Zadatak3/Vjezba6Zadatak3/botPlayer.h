#pragma once
#include "player.h"

class BotPlayer : public Player
{
public:
	BotPlayer() : Player() {}
	BotPlayer(string name) { this->name.assign(name); }
	void setBotHand() { this->hand = rand() % 5; };
	int getPoints() { return this->points; }
	void setPoints() { this->points++; }
	void setParNepar(ParNepar parOrNepar) { this->parOrNepar = parOrNepar; }
	int getHand() { return hand; };
	void setHand(int hand) {};
	ParNepar getParNepar() { return parOrNepar; }
};