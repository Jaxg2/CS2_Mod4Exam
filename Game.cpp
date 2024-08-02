#include "Game.h"
#include <iostream>
using namespace std;



void Game::play()
{
	cout << name << " a " << genre << " game for " << numPlayers <<
		"players, where players try to " << winCondition << endl
		<< "Each game takes about " << playtime << " minutes.";
}