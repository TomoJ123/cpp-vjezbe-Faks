#include "Game.h"

Game::Game()
{
	this->points = 3;
	players = {};
}

Game::~Game()
{
	/*
	for (int i = 0; i < players.size(); i++)
	{
		delete (players[i]);
	}
	players.clear();
	*/
}

void Game::play()
{
	for (int i = 0; i < players.size(); i++)
	{
		int guess = players[i]->getguess();
		string guesser = players[i]->getName();
		for (int j = 0; j < players.size(); j++)
		{
			if (guess == players[j]->getPoints() && guesser != players[j]->getName())
			{
				players[i]->settotalpoints(players[i]->gettotalpoints() + 1);
			}
		}
		if (players[i]->gettotalpoints() == 3)
		{
			cout << "igra je gotova dobio je :" << players[i]->getName() << endl;
			for (int i = 0; i < players.size(); i++)
			{
				players[i]->settotalpoints(0);
			}
			break;
		}
	}
}

