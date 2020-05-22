#include "money.h"

Money operator+(Money const& r1, Money const& r2)
{
	Money m(r1.kn + r2.kn, r1.lp + r2.lp);
	m.convert();
	return m;
}


Money operator-(Money const &r1, Money const &r2)
{
	Money m(r1.kn - r2.kn, r1.lp - r2.lp);
	m.convert();
	return m;
}

ostream& operator<<(ostream& os, const Money& receipt)
{
	os << receipt.kn << " and " << receipt.lp;
	return os;
}

Money::Money(int kn, int lp)
{
	this->kn = kn; this->lp = lp;
}

Money::operator double()
{
	
	double kune = kn;
	kune = kn +( (0.0+lp)/100);
	return kune;
}

Money& Money::operator+=(Money const& r1)
{
	kn += r1.kn;
	lp += r1.lp;
	convert();
	return *this;
}

Money& Money::operator-=(Money const& r1)
{
	kn -= r1.kn;
	lp -= r1.lp;
	return *this;
}

void Money::convert()
{
	if (lp >= 100)
	{
		lp = lp % 100;
		kn += 1;
	}
}


