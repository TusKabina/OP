#pragma once
#include "igrac.h"

class Treseta
{
	private:
		int brojIgraca;
		Spil deck;
		vector<Igrac> igraci;
	public:
		void printBodove();
		void printIgrace();
		Treseta(int brojIgraca, vector<string> imenaIgraca);
};