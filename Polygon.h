#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Polygon : public Shape
{
private:
	int numSides;
	string names;
public:
	Polygon(int numSides, string names, string innerShape);
	int getnumSides();
	virtual string describe();
	using Shape::Shape;
};

