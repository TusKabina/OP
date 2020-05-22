#include "array.h"
#include <string.h>
#include <ctime>
int main()
{
	
	/*srand(time(0));
	Array<int> a(10);
	int n = a.getSize();
	Array<char> as(1);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
	a.print();
	a.sort();
	a.print();*/

	Array<char> a(3);
	char arr[5] = { 'i', 'I', 'a', 'l', 'm' };

	Array<char> ar(arr, 5);
	ar.sort();
	ar.print();


}