#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Player {
public:
	int totalPoints;
	int guess;
	string name;
	vector<int> coins;
	int points;
	vector<int> hand;

public:
	Player();
	virtual ~Player();
	//virtual void setHand(vector<int>)=0; nije potrebno bilo jer computer sam bira svoju ruku
	virtual int getPoints() = 0;
	virtual vector<int> getHand() = 0;
	virtual string getName() = 0;
	//virtual void setguess(int) = 0; computer sam bira svoj guess
	virtual int getguess() = 0;
	virtual int gettotalpoints() = 0;
	virtual void settotalpoints(int) = 0;
};
