#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "funkcije.h"
using namespace std;


void delArray(int* arr)
{
	delete[] arr;
}
/*int* myRealloc(int size, int* arr)
{
	int newsize = size * 2;
	int* temp = new int(newsize);
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delArray(arr);
	return temp;
}*/

int* myRealloc(int size, int* arr)
{
	int newsize=size*2;
	int* temp=new int[newsize];
	copy(arr, arr + size, temp);
	delete[]arr;
	return temp;
}
int* createArray(int* n)
{
	int velicina = 2;
	int* arr = new int(velicina);

	int i = 0;
	int broj;
	cout << "Upisite broj" << endl;
	cin >> broj;
	while (broj)
	{
		arr[i] = broj;
		i++;
		if (i >= velicina)
		{

			arr = myRealloc(velicina, arr);
			velicina = velicina * 2;
		}
		cout << "Upisite broj" << endl;
		cin >> broj;

	}
	*n = i;
	return arr;
}
int main()
{
	int n;
	int* arr = createArray(&n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
