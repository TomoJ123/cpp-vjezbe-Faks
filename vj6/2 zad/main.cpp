
#include "Player.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"
#include "Game.h"

#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	Game one;
	vector<Player*> pntrPlayers;
	//vector<int> points;
	HumanPlayer tomo("tomo");
	HumanPlayer ante("ante");
	ComputerPlayer tipo("tipo");
	Player* first = &tomo;
	Player* second = &ante;
	Player* third = &tipo;
	vector<int> tomohand = { 1,2,5};
	vector<int> antehand = { 1,2 };
	tomo.setHand(tomohand);
	ante.setHand(antehand);
	tipo.setHand();
	tomo.setguess(4);
	ante.setguess(1);
	tipo.setHand();
	//points.push_back(tomo.getPoints());
	pntrPlayers.push_back(first);
	pntrPlayers.push_back(second);
	pntrPlayers.push_back(third);
	one.setPlayers(pntrPlayers);
	one.play();
	tomohand = { 1,5 };
	antehand = { 1,5 };
	tomo.setHand(tomohand);
	ante.setHand(antehand);
	tipo.setHand();
	tipo.setguess();
	tomo.setguess(4);
	ante.setguess(6);
	one.play();
	cout << tomo.totalPoints;
	cout << ante.totalPoints;
	cout << tipo.totalPoints;
	
	one.play();

	



	 


	return 0;
}