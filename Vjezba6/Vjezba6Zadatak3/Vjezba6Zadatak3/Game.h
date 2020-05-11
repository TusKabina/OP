#pragma once
#include "HumanPlayer.h"
#include "botPlayer.h"
#include <vector>
#include <Windows.h>
#include <iostream>

class Game
{
	private:
		vector<Player*> players;
		int endPoints = 0;
	public:
		Game();
		~Game();
		Game(int endpoints);
		void HumanPlayLogic();
		void botPlayLogic();
		void printHands();
		void printMessage();
		ParNepar getTotalSumParOrNepar();

};