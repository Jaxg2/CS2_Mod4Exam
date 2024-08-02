#ifndef MOVIE_H
#define MOVIE_H

#include "Playable.h"

class Movie : public Playable
{
private:
	string name;
	string genre;
	int year;
	string director;
	string plot;
public:
	virtual void play();
	using Playable::Playable;
};

#endif