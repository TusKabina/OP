#include <iostream>
#include <string>

using namespace std;
void eraseSubString(string& str, string& str2)
{
	int pos;
	while ((pos = str.find(str2)) != string::npos)
	{
		str.erase(pos, str2.length());
	}
}

int main()
{
	string str = "Dobra vecer svima vecer nije Dobra";
	string str2 = "Dobra";
	eraseSubString(str, str2);
	cout << str;
}