#include "zad1.h"


Player::Player()
{
	brbod = 0;
	Name = " ";
	cout << "konstruktor" << endl;
}

Player::~Player()
{
	Name.clear();
	cout << "destruktor" << endl;
}

void Player::setName(string a)
{
	Name = a;
}

void Player::setbrbod(int brbod)
{
	this->brbod = brbod;
}

int Player::getbrbod()
{
	return brbod;
	
}

string Player::getName()
{
	return Name;
}