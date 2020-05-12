#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <ostream>
using namespace std;

class Money {
public:
	int kn;
	int lp;
public:
	Money() { this->kn = 0; this->lp = 0; }
	Money(int, int);
	Money(int);
	~Money();
	friend Money operator+(const Money& a, const Money& b);
	friend Money& operator-=( Money& a, Money& b);
	friend Money& operator+=(Money& a, Money& b);
	friend ostream& operator<<(ostream& os, const Money& a);
	operator double()  { return(kn * 100. + lp) / 100; }

};
