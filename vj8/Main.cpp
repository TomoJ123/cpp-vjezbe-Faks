#include "Money.h"


// nalazimo se u (hipotetskoj) ulozi konobara u restoranu
// (hipotetskom) gostu treba izdati (hipotetski) racun
int main() {
	// zadan je jednostavan cjenik
	Money juha(11, 30), becki(15, 50), salata(10), pivo(15), babic(16, 40);
	// gost je konzumirao:
	Money racun = juha + becki + salata + pivo;
	//cout << racun.kn << "." << racun.lp << endl;
	// na zalost nas konobar je nepazljiv pa pivo treba stornirati
	racun -= pivo;
	//cout << racun.kn << "." << racun.lp << endl;
	// i dodati babic
	racun += babic;

	cout << racun << endl;

	double a = racun;
	cout << a << "kuna" << endl;
}