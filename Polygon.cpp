#include "Shape.h"
#include "Polygon.h"
#include <iostream>
using namespace std;

Polygon::Polygon(int numSides, string names, string innerShape)
{
	names = "polygon";
	numSides = 0;

}

string Polygon::describe()
{

}

int Polygon::getnumSides()
{
	return numSides;
}

std::ostream& operator<<(std::ostream& strm, int numSides)
{
	strm << "A " + numSides << "-sided" + name << "surrounding a " + innerShape;
}