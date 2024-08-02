#ifndef RECORD_H
#define RECORD_H
#include "Playable.h"
#include <iostream>
#include <vector>
using namespace std;

class Record : public Playable
{
private:
	string artist;
	vector <string> tracks;
public:
	virtual void play(string &artist);
	using Playable::Playable;
};

#endif