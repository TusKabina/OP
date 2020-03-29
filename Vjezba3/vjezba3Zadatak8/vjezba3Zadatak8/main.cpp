#include <iostream>
#include <vector>

using namespace std;


void unstuffing_bit(vector<int>& v)
{
	int brojac = 0;
	int i = 0;
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
			
			v.erase(v.begin()+i+1);
			brojac = 1;
		}
		i++;
	}
}
int main()
{
	vector<int>v = { 0,0,1,1,1,0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,1,0,1,1,0,1 };
	unstuffing_bit(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}
