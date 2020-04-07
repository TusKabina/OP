#pragma once
#include "spil.h"
#include <string>

class Igrac
{
	private:
		string ime;
		vector<Karta> ruka;
		int bodovi=0;
		
	public:
		void akuzaj();
		void napolitana();
		int getBodovi();
		void printIme();
		void printRuka();
		void dobijRuku(vector<Karta> ruka);
		Igrac(string ime);
};