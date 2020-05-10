#pragma once
#include "player.h"
#include "humanplayer.h"
#include "botPlayer.h"
#include <windows.h>


class Game
{
private:
	vector<Player*> players;
	int end=0;
	int playerNumber=0;
	int totalHandPoints = -1;
	
public:
	Game();
	Game(int playerNumber, int end);
	void setTotalHandPoints();
	int getTotalHandPoints();
	void setPlayers(vector<Player*> players)
	{
		this->players = players;
	}
	void playLogic();
	void botLogic();
};
