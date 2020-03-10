#include <iostream>
#include <windows.h>
using namespace std;
int& getValue(int* niz, unsigned i)
{
	return niz[i];
}


int main()
{
	int niz[5]={1,2,3,4,5};
	getValue(niz,4)++;
	cout << getValue(niz,4)++<<endl;;
	return 0;

}