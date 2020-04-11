#include "zzad1.h"


card::card()
{
	cout << "konstruktor za kartu" << endl;
	number = 0;
	kind = ' ';
}



void card::setcardnum(int number)
{
	this->number = number;
	
}

void card::setcardkind(char kind)
{
	this->kind = kind;

}

int card::getcardnum()
{
	return number;
}

char card::getcardkind()
{
	return kind;
}