//Jaxon
#include "Shape.h"
#include "Circle.h"
#include "Polygon.h"
#include "Playable.h"
#include "Game.h"
#include "Record.h"
#include "Movie.h"
#include <iostream>
using namespace std;


int main()
{
	//Circle and Polygon demonstration
	Shape myShape();
	cout << myShape->describe;

	//Playable
	Playable* playables[3];
	Movie here;

	playables[0] = new Record(name, tracks);
	playables[1] = new Movie("Ferrel", 2008, "comedy", "step brothers", "family");
	playables[2] = new Game("Uno,", "Card", 8, "Lose all cards", 15);
	cout << Playable.play();
}