#ifndef PLAYABLE_H
#define PLAYABLE_H
#include <iostream>
using namespace std;

class Playable
{
public:
	Playable();
	virtual void play() = 0;

};

#endif