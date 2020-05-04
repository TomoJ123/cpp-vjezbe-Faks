#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(string name)
{
	//cout << "constructing derived" << endl;
	this->name = name;
}

HumanPlayer::~HumanPlayer()
{
	//cout << "destructing derived" << endl;
}

void HumanPlayer::setHand(vector<int> hand)
{
	vector<int> put;
	this->hand.clear();
	this->points = 0;
	for (int i = 0; i < hand.size(); i++)
	{
		if (hand.size() > 3)
		{
			cout << "unjeli ste previse brojeva!" << endl;
			break;
		}
		if (hand[i] != 1 && hand[i] != 2 && hand[i] != 5)
		{
			cout << "nevazeci brojevi,unesite opet!" << endl;
			break;
		}
		put.push_back(hand[i]);
		points += hand[i];
	}
	
	this->hand = put;
}

int HumanPlayer::getPoints()
{
	return this->points;
}

vector<int> HumanPlayer::getHand()
{
	return this->hand;
}