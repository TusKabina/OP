#include <iostream>
#include <windows.h>
using namespace std;
void NajveciNajmanji(int* niz, int& najmanji, int&najveci, int n)
{

	for (int i = 0; i < n; i++)
	{
		if (niz[i] < najmanji)
		{
			najmanji = niz[i];
		}
		if (niz[i] > najveci)
		{
			najveci = niz[i];
		}
	}
}



int main()
{
	int niz[5]={10,9,11,21,1};
	int min=niz[0];
	int max=niz[0];
	int n=sizeof(niz)/sizeof(int);
	NajveciNajmanji(niz,min,max,n);
	cout << " "<<min << " " <<max << endl;
	return 0;
}