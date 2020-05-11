#include "Game.h"

Game::Game()
{
	players = {};
}

Game::~Game()
{

}
void Game::HumanPlayLogic()
{
	while (1)
	{
		for (int i = 0; i < 2; i++)
		{
		beginning:
			system("CLS");
			HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE); //Hides  user input from the user
			DWORD mode = 0;
			GetConsoleMode(hStdin, &mode);
			SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
			cout << players[i]->getName() << " Pick the number from 0 to 5" << endl;
			int number;
			cin >> number;
			if (number >= 0 && number <= 5)
			{
				players[i]->setHand(number);
			}
			else
			{
				cout << "Number out of range!" << endl;
				Sleep(1000);
				goto beginning;
			}
		}
		printMessage();
		printHands();
		for (int i = 0; i < 2; i++)
		{
			if (getTotalSumParOrNepar() == players[i]->getParNepar())
			{
				cout << players[i]->getName() << " has won a point" << endl;
				players[i]->setPoints();
				if (players[i]->getPoints() == endPoints)
				{
					goto end;
				}
				Sleep(4000);
				system("CLS");
			}
		}
	}
end:
	cout << "The game has finnished. Thanks for playing!" << endl;
}

void Game::botPlayLogic()
{
	while (1)
	{
	theBeginning:
		system("CLS");
		cout << players[0]->getName() << " Pick the number from 0 to 5" << endl;
		int number;
		cin >> number;
		if (number >= 0 && number <= 5)
		{
			players[0]->setHand(number);
		}
		else
		{
			cout << "Number out of range!" << endl;
			Sleep(1000);
			goto theBeginning;
		}
		
		players[1]->setBotHand();
		printMessage();
		printHands();
		for (int i = 0; i < 2; i++)
		{
			if (getTotalSumParOrNepar() == players[i]->getParNepar())
			{
				cout << players[i]->getName() << " has won a point" << endl;
				players[i]->setPoints();
				if (players[i]->getPoints() == endPoints)
				{
					goto theend;
				}
				Sleep(1000);
				system("CLS");
			}
		}

	}
theend:
	cout << "The game has finnished. Thanks for playing!" << endl;
}
void Game::printHands()
{
	cout << players[0]->getName() << " " << players[0]->getHand() << "\t\t" << players[1]->getName() << " " << players[1]->getHand() << endl;
}
void Game::printMessage()
{
	system("CLS"); cout << "PAR";
	Sleep(500);
	system("CLS"); cout << "NEPAR";
	Sleep(500);
	system("CLS"); cout << "BIM";
	Sleep(500);
	system("CLS"); cout << "BAM";
	Sleep(500);
	system("CLS"); cout << "BUS";
	Sleep(500);
	system("CLS");
}
ParNepar Game::getTotalSumParOrNepar()
{
	if ((players[0]->getHand() + players[1]->getHand()) % 2 == 0)
	{
		return  ParNepar::par;
	}
	else
	{
		return  ParNepar::nepar;
	}
	
}
Game::Game(int endPoints)
{
	this->endPoints = endPoints;
	int flag;
	cout << "SinglePlayer(1) or MultiPlayer(2)" << endl;
	cin >> flag;
	ParNepar parOrNepar;
	if (flag == 2)
	{
		string player;
		cout << "Name of player" << endl;
		cin >> player;
		HumanPlayer h1(player);
	start:
		cout << "Nepar(1) or par(2)" << endl;
		int number;
		cin >> number;
		switch (number)
		{
		case 1:
			h1.setParNepar(ParNepar::nepar);
			break;
		case 2:
			h1.setParNepar(ParNepar::par);
			break;
		default:
			cout << "number out of range!" << endl;
			goto start;
			break;
		}
		cout << "Name of player" << endl;
		cin >> player;
		HumanPlayer h2(player);
		switch (h1.getParNepar())
		{
		case  ParNepar::nepar:
			h2.setParNepar(ParNepar::par);
			break;
		case  ParNepar::par:
			h2.setParNepar(ParNepar::nepar);
			break;
		default:
			break;
		}
		players.push_back(&h1);
		players.push_back(&h2);
		HumanPlayLogic();
	}
	else
	{
		string player;
		cout << "Name of player" << endl;
		cin >> player;
		HumanPlayer h1(player);
	thestart:
		cout << "Nepar(1) or par(2)" << endl;
		int number;
		cin >> number;
		switch (number)
		{
		case 1:
			h1.setParNepar(ParNepar::nepar);
			break;
		case 2:
			h1.setParNepar(ParNepar::par);
			break;
		default:
			cout << "Number out of range!" << endl;
			goto thestart;
			break;
		}
		BotPlayer bot("BOT");
		switch (h1.getParNepar())
		{
		case  ParNepar::nepar:
			bot.setParNepar(ParNepar::par);
			break;
		case  ParNepar::par:
			bot.setParNepar(ParNepar::nepar);
			break;
		default:
			break;
		}
		players.push_back(&h1);
		players.push_back(&bot);
		botPlayLogic();
	}

}
