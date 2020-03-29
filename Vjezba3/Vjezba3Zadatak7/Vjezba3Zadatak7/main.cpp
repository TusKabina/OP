#include <iostream>
#include <vector>

using namespace std;

void stuffing_bit(vector<int>&v)
{
	int i = 0;
	int brojac = 0;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		if (*it == 1)
		{
			brojac++;
		}
		else
		{
			brojac = 0;
		}
		if (brojac == 5)
		{
			it = v.insert(v.begin() + i+1, 0);
			brojac = -1;
		}
		i++;
	}
}

int main()
{
	vector<int>v;
	int znamenka;
	while (1)
	{
		cout << "Unesite broj" << endl;
		cin >> znamenka;
		if (znamenka < 0 || znamenka>1)
		{
			break;
		}
		v.push_back(znamenka);
	}
	stuffing_bit(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	
}