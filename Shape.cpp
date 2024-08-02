#include "Shape.h"

Shape::Shape()
{
	name = "Dot";

}

string Shape::getName()
{
	return name;
}

int Shape::getinnerShape()
{
	return innerShape;
}

string Shape::describe()
{
	name = "a Dot.";
	return name;
}