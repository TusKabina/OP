#include "treseta.h"



int main()
{
	vector<string> imena;
	int broj;
	
	cout << "2 ili 4 igraca?" << endl;
	cin >> broj;
	if (broj != 2 && broj != 4)
	{
		cout << "Unijeli ste nedozvoljen broj igraca" << endl;
		exit(EXIT_FAILURE);
	}
	int brojac = 1;
	while (brojac <= broj)
	{
		cout << "ime "  << brojac << ". igraca" << endl;
		string name;
		cin >> name;
		imena.push_back(name);
		brojac++;
	}
	Treseta treseta(broj, imena);

}