#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;

#include "Playable.h"
class Game : public Playable
{
private:
	string name;
	string genre;
	int numPlayers;
	string winCondition;
	int playtime;
public:
	virtual void play();
	using Playable::Playable;
};

#endif