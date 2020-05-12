#include "Money.h"

Money::Money(int kn)
{
	this->kn = kn;
	this->lp = 0;
}


Money::Money(int kn, int lp)
{
	this->kn = kn;
	this->lp = lp;
}

Money::~Money()
{
	//cout << "destructor!" << endl;
}

Money operator+(const Money& a, const Money& b)
{
	Money c;
	c.kn = a.kn + b.kn;
	c.lp = a.lp + b.lp;
	while (1)
	{
		if (c.lp >= 100)
		{
			c.kn += 1;
			c.lp -= 100;
		}
		else
			break;
	}
	return c;
}

Money& operator-=(Money& a, Money& b)
{
	a.kn = a.kn - b.kn;

	if (a.lp < b.lp)
		{
			a.kn -= 1;
			a.lp += 100;
		}
	
	a.lp = a.lp - b.lp;
	return a;
}

Money& operator+=(Money& a, Money& b)
{
	a.kn = a.kn + b.kn;
	a.lp = a.lp + b.lp;

	if (a.lp >= 100)
	{
		a.kn += 1;
		a.lp -= 100;
	}
	return a;
}

ostream& operator<<(ostream& os, const Money& a)
{
	return os << a.kn << "kuna," << a.lp << "lipa";
}

