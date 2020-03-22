#include <iostream>
#include <string>

using namespace std;

string longestCommonSubstring(string str1, string str2)
{
	string rijec = "";
	int duzinaStr1 = str1.length();
	int duzinaStr2 = str2.length();
	for (int i = 0; i < duzinaStr1; i++)
	{
		int pozicijaStr1 = str2.find(str1[i]);
		while (pozicijaStr1 != string::npos)
		{
			string temp = "";
			temp += str1[i];
			for (int j = pozicijaStr1 + 1; j < duzinaStr2; j++)
			{
				temp += str2[j];
				int pozicijaStr2 = str1.find(temp);
				if (pozicijaStr2 == string::npos)
				{
					break;
				}
				if (temp.length() > rijec.length())
				{
					rijec = temp;
				}
			
			}
			pozicijaStr1 = str2.find(str1[i], pozicijaStr1 + 1);
		}
	}
	return rijec;
}
int main()
{
	string str1 = "ovo jednako prvi string najduza to nije najduzaaaa";
	string str2 = "nivo jodnako prvisimo stringo kojoj najduza nema najduzaaaa";
	string common=longestCommonSubstring(str1, str2);
	cout << common;
}