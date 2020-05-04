#pragma once
#include "Player.h"



class HumanPlayer : public Player {

public:
	HumanPlayer(string);
	~HumanPlayer();
	void setHand(vector<int>);
	int getPoints();
	vector<int> getHand();
	string getName() { return this->name; }
	void setguess(int n) { this->guess = n; }
	int getguess() { return this->guess; }
	int gettotalpoints() { return totalPoints; }
	void settotalpoints(int n) { this->totalPoints = n; }
};
