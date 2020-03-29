#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

vector<string> Translation(vector<string> mojVector)
{

	string hay = "hay";
	string ay = "ay";
	vector<string>::iterator it = mojVector.begin();
	int i = 0;
	int pozicija = 0;
	int RandIndex = rand() % mojVector.size();
	string& str = mojVector[RandIndex];
	int duzina = str.length();
	int j = 0;
	vector<int>v;
	v.push_back(0);
	
	while (i < duzina)
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == '?' || str[i] == '!')
		{
			v.push_back(i + 1);
		}
		i++;
	}
	int haylength = 0;
	int index=0;
	int len = 0;
	int suglasnikCount = 0;
	while (j < v.size()-1)
	{
		 index = v[j] + haylength;
		 len = v[j + 1] - v[j] - 1;
		 
			 if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
			 {


				 str.insert(index + len, hay);
				 haylength += 3;
			 }
			 else
			 {
				 while (1)
				 {
					 if (str[suglasnikCount+index] == 'a' || str[suglasnikCount + index] == 'e' || str[suglasnikCount + index] == 'i' || str[suglasnikCount + index] == 'o' || str[suglasnikCount + index] == 'u' || str[suglasnikCount + index] == '.' || str[suglasnikCount + index] == '?' || str[suglasnikCount + index] == '!')
					 {
						 break;
					}
					 suglasnikCount++;
				 }
				string noviString(str,index,suglasnikCount);
				 str.insert(index + len, noviString);
				 str.insert(index + len+suglasnikCount, ay);
				str.erase(index,suglasnikCount);
				 haylength += 2;
				
				 
			 }
			 suglasnikCount=0;
		j++;
	}
	return mojVector;
}
int main()
{
	srand(time(NULL));
	vector<string> v = { "what time is it?","the dark side of the moon.","wish you where here.","shine on you crazy diamond." };
	
	v=Translation(v);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}

}