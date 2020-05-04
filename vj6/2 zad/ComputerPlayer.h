#pragma once
#include "Player.h"



class ComputerPlayer : public Player {

public:
	ComputerPlayer(string);
	~ComputerPlayer();
	void setHand();
	int getPoints();
	vector<int> getHand();
	string getName() { return this->name; }
	void setguess(); 
	int getguess() { return this->guess; }
	int gettotalpoints() { return totalPoints; }
	void settotalpoints(int n) { this->totalPoints = n; }
};
