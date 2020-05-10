#include "game.h"
Game::Game()
{
	players = {};
}
void Game::setTotalHandPoints()
{
	int i = 0;
	this->totalHandPoints = 0;
	for (auto it = players.begin(); it != players.end(); it++)
	{
		this->totalHandPoints += players[i]->getPlayerHand();
		i++;
	}
}
int Game::getTotalHandPoints()
{
	return totalHandPoints;
}
void Game::playLogic()
{
	while (1)
	{
		if (getTotalHandPoints() == -1)
		{
			for (int i = 0; i < playerNumber; i++)
			{
				beginning:
				system("CLS");
				HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE); //Hides coins user input from the user
				DWORD mode = 0;
				GetConsoleMode(hStdin, &mode);
				SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
				cout << players[i]->getPlayerName() << " Pick how much coins you'll have" << endl;
				int coins;
				cin >> coins;
				if (coins == 0 || coins == 1 || coins == 2 || coins == 5 || coins == 3 || coins == 6 || coins == 7 || coins == 8)
				{
					players[i]->setPlayerHand(coins);
				}
				else
				{
					cout << "Error! You need to pick from 0 to 3 coins! (1,2,5)" << endl;
					Sleep(1000);
					goto beginning;
				}
				
			}
			setTotalHandPoints();
		}
		for (int i = 0; i < playerNumber; i++)
		{
			system("CLS");
			int guessedCoins;
			cout << players[i]->getPlayerName() << " guess coins" << endl;
			cin >> guessedCoins;
			if (guessedCoins == getTotalHandPoints())
			{
				cout << "Correct! " << " " << players[i]->getPlayerName() << " gets 1 point" << endl;
				players[i]->setPoints();
				if (players[i]->getPoints() == end)
				{
					goto thend;
				}
				this->totalHandPoints = -1;
				Sleep(1000);
				break;
			}
		}
	}
thend:
	cout << "The end of the game" << endl;

}
void Game::botLogic()
{
	while (1)
	{
		if (getTotalHandPoints() == -1)
		{
			start:
			cout << players[0]->getPlayerName() << " Pick how much coins you'll have" << endl;
			int coins;
			cin >> coins;
			if (coins == 0 || coins == 1 || coins == 2 || coins == 5 || coins == 3 || coins == 6 || coins == 7 || coins == 8)
			{
				players[0]->setPlayerHand(coins);
			}
			else
			{
				cout << "Error! You need to pick from 0 to 3 coins! (1,2,5)" << endl;
				Sleep(1000);
				goto start;
			}
			for (int i = 1; i < playerNumber; i++)
			{
				players[i]->setBotHand();
			}
			setTotalHandPoints();
		}
		system("CLS");
		int guessedCoins;
		cout << players[0]->getPlayerName() << " guess coins" << endl;
		cin >> guessedCoins;
		if (guessedCoins == getTotalHandPoints())
		{
			cout << "Correct! " << " " << players[0]->getPlayerName() << " gets 1 point" << endl;
			players[0]->setPoints();
			if (players[0]->getPoints() == end)
			{
				goto thend;
			}
			this->totalHandPoints = -1;
			Sleep(1000);
		}
		for (int i = 1; i < playerNumber; i++)
		{
			guessedCoins = players[i]->botGuess();
			cout << "Bot " << players[i]->getPlayerName() << " Guessed " << guessedCoins << endl;
			Sleep(1000);
			if (guessedCoins == getTotalHandPoints())
			{
				cout << "Correct! " << " " << players[i]->getPlayerName() << " gets 1 point" << endl;
				players[i]->setPoints();
				if (players[i]->getPoints() == end)
				{
					goto thend;
				}
				this->totalHandPoints = -1;
				Sleep(1000);
				break;
			}
		}
	}
thend:
	cout << "The end of the game" << endl;
}
Game::Game(int playerNumber, int end)
{

	this->playerNumber = playerNumber;
	this->end = end;
	int playerCount = 0;
	int flag;
	cout << "Human player (1) or bot (2)" << endl;
	cin >> flag;
	if (flag == 1)
	{
		vector<HumanPlayer> hPlayers;
		while (playerCount < playerNumber)
		{
			string player;
			cout << "Name of player:" << endl;
			cin >> player;
			HumanPlayer h(player);
			hPlayers.push_back(h);
			playerCount++;
		}
		int i = 0;
		for (auto it = hPlayers.begin(); it != hPlayers.end(); it++)
		{
			Player* p = &hPlayers[i];
			this->players.push_back(p);
			i++;
		}
		playLogic();
	}
	else
	{
		string player;
		cout << "Enter your name:" << endl;
		cin >> player;
		HumanPlayer h(player);
		Player* p = &h;
		this->players.push_back(p);

		vector<BotPlayer> bPlayers;
		while (playerCount < playerNumber-1)
		{
			string player;
			player.assign("BOT");
			player += to_string(playerCount+1);
			BotPlayer b(player);
			bPlayers.push_back(b);
			playerCount++;
		}
		int i = 0;
		for (auto it = bPlayers.begin(); it != bPlayers.end(); it++)
		{
			Player* b = &bPlayers[i];
			this->players.push_back(b);
			i++;
		}
		botLogic();
	}
}


