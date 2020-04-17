#include "treseta.h"
int main()
{
	vector<string> names;
	int number;
	cout << "2 or 4 players?" << endl;
	cin >> number;
	if (number != 2 && number != 4)
	{
		cout << "INVALID INPUT!" << endl;
		exit(EXIT_FAILURE);
	}
	int counter = 1;
	while (counter <= number)
	{
		cout << "Name of the  "  << counter << ". player" << endl;
		string name;
		cin >> name;
		names.push_back(name);
		counter++;
	}
	Treseta treseta(number, names);
}
