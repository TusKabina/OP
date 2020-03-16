#include <iostream>
using namespace std;


int* myRealloc(int size, int* arr)
{
	int newsize = size * 2;
	int* temp = new int[newsize];
	copy(arr, arr + size, temp);
	delete[] arr;
	return temp;
}
int* createArray(int* n)
{
	int i = 0;
	int size = 10;
	int broj;
	int* arr = new int[size];
	cout << "upisite broj" << endl;
	cin >> broj;
	while (broj)
	{
		arr[i] = broj;
		i++;
		if (i >= size)
		{
			arr = myRealloc(size, arr);
			size *= 2;
		}
		cout << "upisite broj" << endl;
		cin >> broj;
	}
	 *n = i;
	return arr;
}
void printArray(int* arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int n;
	int* arr = createArray(&n);
	printArray(arr, n);
	delete[] arr;
	arr = 0;
	return 0;
}