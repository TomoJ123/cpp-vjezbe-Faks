#pragma once


#include <iostream>
#include <vector>
#include <string>

using namespace std;
#include "Player.h"


class Game {
	int points;
	vector<Player*> players;
public:
	Game();
	~Game();
	void setPlayers(vector<Player*> players) { this->players = players; }
	void play();
};

