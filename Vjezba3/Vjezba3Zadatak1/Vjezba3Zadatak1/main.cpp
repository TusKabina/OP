#include <iostream>
#include <vector>

using namespace std;

vector<int> sumOfEelements(vector<int> mojVector, int& min, int& max)
{
	int brojac = 0;
	int velicina = mojVector.size()/2;
	vector<int> noviVector;
	vector<int>::reverse_iterator rit;
	vector<int>::iterator it;
	for (it = mojVector.begin(), rit = mojVector.rbegin(); it != mojVector.end(), rit != mojVector.rend(); ++it, ++rit)
	{
		if (brojac == velicina)
			break;
		int x = *it + *rit;
		if (x < min)
		{
			min = x;
		}
		if (x > max)
		{
			max = x;
		}
		noviVector.push_back(x);
		brojac++;
	}
	return noviVector;
}
void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}
int main()
{
	
	vector<int> mojVector = { 1,10,21,3,11,22,28,18,11,22,31,9 };
	int max = INT_MIN;
	int min = INT_MAX;
	vector<int> noviVector = sumOfEelements(mojVector,min,max);
	printVector(noviVector);
	cout << "Maximalna velicina " << max << " Minimalna velicina " << min;
}