#include "money.h"

int main()
{
	Money juha(11, 30), becki(15, 50), salata(10), pivo(15), babic(16, 40);

	Money racun = juha + becki + salata + pivo;

	racun -= pivo;
	racun += babic;
	cout << racun << endl;
	cout << racun.operator double() << endl;
	
}