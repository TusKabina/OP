#include <iostream>
#include <windows.h>
using namespace std;

int* makeArray(int n)
{
	int* arr = new int[n];
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr;
}




void printArray(int* niz, int n)
{
	for(int i=0;i<n;i++)
	{
		cout << " " << niz[i];
	}

}

int main()
{
	int n;
  cout << "upisite velicinu niza" << endl;
  cin >>n;

  int* niz=makeArray(n);
  printArray(niz,n);
  return 0;

}