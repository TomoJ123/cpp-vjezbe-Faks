#include "zad1.h"
#include "zzad1.h"

//za klasu card mi nije trebao destruktor jer imam dvije varijable koje se alociraju na steku a ne na heapu

int main1()
{
	/*
	card a;
	cout << "main" << endl;
	a.setcardkind('B');
	a.setcardnum(5);
	a.getcard();
	*/

	Player a;
	cout << "main" << endl;
	a.setName("ivana");
	a.setbrbod(5);
	
	
	return 0;
}