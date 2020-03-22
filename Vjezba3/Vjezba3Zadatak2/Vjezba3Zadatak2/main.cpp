#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseString(string& mojstring)
{
	int size = mojstring.length();
	for (int i = 0; i < size; i++)
	{
		mojstring[i] = tolower(mojstring[i]);
	}
	reverse(mojstring.begin(), mojstring.end()-1);
	
	int begin = 0;
	for (int end = 0; end < size; end++)
	{
		if (mojstring[end] == ' ' || mojstring[end] == '.')
		{
			reverse(mojstring.begin() + begin, mojstring.begin() + end);
			begin = end+1;
		}
	}
	mojstring[0] = toupper(mojstring[0]);
}



int main()
{
	string mojString = "Over thinking over analyzing separates the body from the mind.";
	reverseString(mojString);
	cout << mojString;
}