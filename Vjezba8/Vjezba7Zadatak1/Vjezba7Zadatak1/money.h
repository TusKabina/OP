#pragma once
#include <iostream>

using namespace std;

class Money
{
private:
	int kn = 0;
	int lp = 0;
public:
	Money(int kn) : kn(kn) {}
	Money(int kn, int lp);
	
	friend Money operator + (Money const&, Money const&);
	operator double();
	Money& operator += (Money const&);
	friend Money operator - (Money const&, Money const&);
	Money& operator -= (Money const&);
	friend ostream& operator<<(ostream& os, const Money& receipt);
	void convert();
};