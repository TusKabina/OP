#include "botPlayer.h"

void BotPlayer::setBotHand()
{
	int x[8] = { 0,1,2,5,3,6,7,8 };
	this->playerHand = x[rand() % 8];
}

int BotPlayer::getBotHand()
{
	return this->playerHand;
}

int BotPlayer::botGuess()
{
	return rand() % 100;
	
}

