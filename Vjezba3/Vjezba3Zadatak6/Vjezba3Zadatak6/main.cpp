#include <iostream>
#include <list>

using namespace std;
int function(list<int>& l)
{
	list<int>::iterator it;
	for (it = l.begin(); it != l.end(); it++)
	{
		if (*it % 2 != 0 && *it != 1)
		{
			l.insert(it, 1);

		}
		if (*it % 2 == 0)
		{
			it++;
			l.insert(it, 0);
			it--;
		}


	}
	int brojac = 0;
	for (it = l.begin(); it != l.end(); it++)
	{
		if (*it == 0)
		{
			
			break;
		}
		brojac++;
	}
	for (auto rit = l.rbegin(); rit != l.rend(); rit++)
	{
		if (*rit == 1)
			break;
		brojac++;
	}
	int razlika = l.size() - brojac;
	razlika = razlika - 2;
	return razlika;
}


void printList(list<int> l)
{
	list<int>::iterator it;
	for (it = l.begin(); it != l.end(); it++)
	{
		cout << *it <<" ";
	}
}
int main()
{
	list<int> l = { 1,2,4,8,10,12,3,1 };
	int brojac=function(l);
	cout << brojac << endl;
	printList(l);
}