#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer(string a)
{
	//cout << "constructing derived" << endl;
	this->name = a;
}

ComputerPlayer::~ComputerPlayer()
{
	//cout << "destructing derived" << endl;
}

void ComputerPlayer::setHand()
{
	hand.clear();
	points = 0;
	vector<int> times = { 1,2,3 };
	vector<int> coins = { 1,2,5 };
	random_shuffle(times.begin(), times.end());
	random_shuffle(coins.begin(), coins.end());
	if (times[0] == 3)
	{
		hand.push_back(coins[0]);
		hand.push_back(coins[1]);
		hand.push_back(coins[2]);
		points = 8;
	}
	else if (times[0] == 2)
	{
		hand.push_back(coins[0]);
		hand.push_back(coins[1]);
		points = coins[0] + coins[1];
	}
	else
	{
		hand.push_back(coins[0]);
		points = coins[0];
	}
}

vector<int> ComputerPlayer::getHand()
{
	
	return this->hand;
}

int ComputerPlayer::getPoints()
{
	return this->points;
}

void ComputerPlayer::setguess()
{
	vector<int> possibleguess = { 1,2,5,3,6,7 };
	random_shuffle(possibleguess.begin(), possibleguess.end());
	this->guess = possibleguess[4];
}