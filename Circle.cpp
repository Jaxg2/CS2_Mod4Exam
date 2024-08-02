#include "Circle.h"

Circle::Circle(string innerShape)
{
	name = "circle";
	
}


string Circle::describe()
{
	string desc = "a perfect circle surrounding a " + innerShape;
	return desc;
}