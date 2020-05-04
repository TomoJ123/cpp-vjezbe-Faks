#include "Player.h"


Player::Player() {
	//cout << "constructing base" << endl;
	totalPoints = 0;
	guess = 0;
	points = 0;
	coins = { 1,2,5 };

}

Player::~Player()
{
	//cout << "destructing base" << endl;
}